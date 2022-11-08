//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N) {
        long long int xor1 = Arr[0];
        long long int a, x = 0, y = 0;
        
        for(int i=1; i<N; i++)
            xor1 = xor1 ^ Arr[i];
            
        a = xor1 & ~(xor1-1);
        
        for(int i=0; i<N; i++){
            if(Arr[i] & a)
                x = x ^ Arr[i];
            else
                y = y ^ Arr[i];
        }

        vector<long long int> v;        
        v.push_back(x);
        v.push_back(y);
        sort(v.rbegin(), v.rend());
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends







