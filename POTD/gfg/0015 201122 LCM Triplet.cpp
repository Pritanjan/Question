// https://practice.geeksforgeeks.org/problems/lcm-triplet1501/1

//{ Driver Code Starts
// Initial Template for C++

// Initial Template for C++
// Back-end complete function Template for C++
// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long lcmTriplets(long long n) {
        if(n < 3)
            return n;
        else if(n % 2 == 0){
            if(n % 3 == 0)
                return (n-1) * (n-2) * (n-3);
            else
                return n * (n-1) * (n-3);
        }
        else
            return n * (n-1)  * (n-2);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.lcmTriplets(N) << "\n";
    }
}
// } Driver Code Ends






