// https://practice.geeksforgeeks.org/problems/jumping-numbers3805/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long 
class Solution {
  public:
    long long jumpingNums(long long n) {
        // code here
        ll mx = INT_MIN;
        queue<ll> que;
        
        for(int i=0; i<=9; i++){
            que.push(i);
            while(!que.empty()){
                ll f = que.front();
                que.pop();
                
                if(f <= n)
                    mx = max(mx, f);
                if(f == 0 or f > n)
                    continue;
                    
                ll rem = f % 10;
                ll a = f*10 + (rem - 1);
                ll s = f*10 + (rem + 1);
                
                if(rem == 0)
                    que.push(s);
                else if(rem == 9)
                    que.push(a);
                else{
                    que.push(a);
                    que.push(s);
                }

            }
        }
        return mx;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}
// } Driver Code Ends


