// https://practice.geeksforgeeks.org/problems/230d87552a332a2970b2092451334a007f2b0eec/1

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int f(int a,int b,int c,int d){
        int cnt=0;
        
        while(a>c){
            a/=2;
            cnt++;
        }
        while(b>d){
             b/=2;
             cnt++;
        }
        
        return cnt;
    }
    
    int carpetBox(int A, int B, int C, int D){
        return min(f(A,B,C,D), f(B,A,C,D));
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
