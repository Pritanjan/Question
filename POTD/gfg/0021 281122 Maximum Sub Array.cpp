// https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1

// APPROACH 1 -> Brute force 
// Intuition

// Idea is to generate all subarrays having only non-negative elements while
// traversing the subarray and calculating the sum of every valid subarray and 
// updating the maximum sum.


// Implementation
// Step 1: Create two vectors and two variables curr_sum and max_sum with an initial value
// 	   of zero.
// Step 2: Run a loop over the given elements.

// inside the loop
// Step 3: If the current element is less than 0, reset temp vector and current sum.
// Step 4: else update the temp vector and current sum.
// Step 5: if current sum > max sum, update the answer vector and current sum.
// Step 6: if current sum and max sum are equal and length of temp is greater 
// 	   than that of ans, update the answer.

// loop end
// Step 7: if ans vector is empty return -1; else return ans;



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    vector<int> ans;
	    vector<int> cur;
	    
	    int len = 0, start = 0, sum = INT_MIN, curr_sum = 0;
	    
	    for(int i=0; i<n; i++){
	        start = i;
	        if(a[i] < 0) 
	            continue;
	        
	        while(i < n and a[i] >= 0){
	            curr_sum += a[i];
	            cur.push_back(a[i++]);
	        }
	        if(curr_sum > sum or (curr_sum == sum and i - start > len)){
	            sum = curr_sum;
	            len = i - start;
	            ans = cur;
	        }
	        curr_sum = 0;
	        cur.clear();
	    }
	    if(ans.size())
	        return ans;
	   
	   return {-1};
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends


// T.C. -> As for each value we are coping a vector, so the time complexity is O(N*N).
// S.C. -> As we are storing the elements in a vector so the space complexity is O(N), 
// 	   N is number of elements.


// APPROACH 2

// Coping the subarray is increasing the time complexity. 
// So first, we will find the range of the subarray 
// then at the end we will push the subarray in a vector.


// Step 1: take two-pointers.
// Step 2: while the right pointer is less than n run a loop.

// inside the loop
// Step 3: if the right pointer’s element is less than 0. 
// 	   Update the left pointer = left pointer + 1, and current sum=0.
// Step 4: else update the current sum += right pointer’s element.
// Step 5: if current sum > max sum, update the max sum and range.
// Step 6: if current sum and max sum are equal and length of current sum is
// 	   greater than that of  max sum, update the range.

// loop end
// Step 7: final left pointer and right pointer both are -1 return -1.
// Step 8: else push all elements in between the range return and return the vector.


class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    long long max_sum = -1;
	    long long cur_sum = 0;
	    int max_range_left = -1;
	    int max_range_right = -1;
	    int cur_range_left = 0;
	    int cur_range_right = 0;
	    while (cur_range_right < n) {
	        if (a[cur_range_right] < 0) {
	            cur_range_left = cur_range_right + 1;
	            cur_sum = 0;
	        } else {
	            cur_sum += (long long)a[cur_range_right];
	            if (cur_sum > max_sum) {
	                max_sum = cur_sum;
	                max_range_left = cur_range_left;
	                max_range_right = cur_range_right;
	            } else if (cur_sum == max_sum) {
	                if (cur_range_right + 1 - cur_range_left >
	                    max_range_right + 1 - max_range_left) {
	                    max_range_left = cur_range_left;
	                    max_range_right = cur_range_right;
	                }
	            }
	        }
	        cur_range_right++;
	    }
	    vector<int> ans;
	    if (max_range_left == -1 || max_range_right == -1) {
	        ans.push_back(-1);
	        return ans;
	    }

	    for (int i = max_range_left; i <= max_range_right; ++i) ans.push_back(a[i]);
	    return ans;
	}
};


// T.C. ->  As we finding the range first then pushing the elements.
// 	    So the time complexity is O(N), N is number of given elements.
// S.C. ->  As we are storing the elements in a vector so the space complexity is O(N),
// 	    N is number of elements.
	
	
	
