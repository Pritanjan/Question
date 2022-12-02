// https://practice.geeksforgeeks.org/problems/aggressive-cows/1
// 1552. Magnetic Force Between Two Balls.cpp


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int L = 0;
        int R = stalls[n-1] - stalls[0];
        
        int ans = 0;
        
        while(L <= R){
            int mid = L + (R - L)/2;
            int cow = 1;
            int end = stalls[0];
            
            for(int i=1; i<n; i++){
                if(stalls[i] - end >= mid){
                    cow++;
                    end = stalls[i];
                }
            }
            if(cow >= k){
                ans = mid;
                L = mid + 1;
            }else{
                R = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}









