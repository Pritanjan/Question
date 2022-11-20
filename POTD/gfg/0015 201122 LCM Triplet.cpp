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
    long long lcmTriplets(long long N) {
        long long ans;
        // when N is less than 3
        if (N < 3) {
            ans = N;
        }
        // when N is odd
        else if (N % 2) {
            ans = N * (N - 1) * (N - 2);
        }
        // when N is even and not divisible by 3
        else if (N % 3) {
            ans = N * (N - 1) * (N - 3);
        }
        // when N is even and divisible by 3
        else {
            ans = (N - 1) * (N - 2) * (N - 3);
        }
        return ans;
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









