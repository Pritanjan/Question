// https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/
// https://practice.geeksforgeeks.org/problems/a-difference-of-values-and-indexes0302/1

#include <bits/stdc++.h> 
using namespace std; 

class Solution{
public:
    int maxDistance(int arr[], int n) { 
        int mx1 = INT_MIN;
        int mi1 = INT_MAX;
        int mx2 = INT_MIN;
        int mi2 = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            mx1 = max(mx1, arr[i] + i);
            mi1 = min(mi1, arr[i] + i);
            mx2 = max(mx2, arr[i] - i);
            mi2 = min(mi2, arr[i] - i);
        }
        return max(mx1 - mi1, mx2 - mi2);
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

