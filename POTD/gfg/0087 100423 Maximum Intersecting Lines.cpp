// https://practice.geeksforgeeks.org/problems/63c232252d445a377e01cd91adfd7d1060580038/1


// APPROACH 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        map<int, int> m;
        for(auto i : lines) m[i[0]]++, m[i[1] + 1]--;
        int ans = 0, s = 0;
        for(auto i : m) {
            s += i.second;
            ans = max(ans, s);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}







// APPROACH 2

class Solution {
public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        map<int, int> map;
        for(vector<int> arr : lines) {
            map[arr[0]] = map[arr[0]] + 1;
            map[arr[1]+1] = map[arr[1]+1] - 1;
        }
        
        int ans = -1;
        int prefixSum = 0;
        for(auto const &i : map) {
            prefixSum += i.second;
            ans = max(ans, prefixSum);
        }
        
        return ans;
    }
};




