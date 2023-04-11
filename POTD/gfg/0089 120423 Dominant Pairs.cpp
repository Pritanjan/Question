// https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        sort(arr.begin(), arr.begin() + n/2);
        sort(arr.begin() + n/2, arr.end());
        int cnt = 0;
        int j   = n/2;
        
        for(int i=0; i<n/2; i++) {
            while(j < n && arr[i] >= 5 * arr[j]){
                j++;
            }
            cnt += j - n/2;
        }
        return cnt;
    }  
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}

