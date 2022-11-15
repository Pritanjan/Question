// https://practice.geeksforgeeks.org/problems/close-to-perfection1525/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int n) {
        int len = 0;
        int i = 0;
        int j = 0;
        
        while(j < n){
            while(abs(arr[i] - arr[j]) > 1)
                i++;
            len = max(len, j - i + 1);
            j++;
        }
        return len;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends



