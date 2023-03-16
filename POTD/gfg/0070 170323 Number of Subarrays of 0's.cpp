//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) {
    long long count = 0;
    long long start = 0, end = 0;
    
    while(end < n) {
        if(arr[end] == 0) {
            end++;
        }else{
            count += (end - start) * (end - start + 1) / 2;
            start = end + 1;
            end = start;
        }
    }
    
    if (arr[n-1] == 0) {
        count += (end - start) * (end - start + 1) / 2;
    }
    
    return count;
}



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}




// Initialize a variable count to 0, which will keep track of the number of subarrays of 0's.

// Initialize two pointers start and end to 0, which will represent the start and 
// end indices of a subarray.

// Traverse the array arr using a loop from start to end.

// If the current element is 0, increment the end pointer.

// If the current element is 1, calculate the number of subarrays that can be formed 
// between start and end pointers. The number of subarrays that can be formed
// between these pointers is equal to (end - start) * (end - start + 1) / 2. 
// Add this value to count.

// Move the start pointer to the next index after the first 0 encountered,
// and set the end pointer to the next index.

// Repeat steps 4-6 until the end of the array is reached.

// Return the value of count


