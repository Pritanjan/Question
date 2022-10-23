// https://www.codingninjas.com/codestudio/problem-of-the-day/easy


#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) {
    int ans = 0;
    for(int i=0; i<k; i++){
        ans += arr[i];
    }
    
    int cur_sum = ans;
    
    for(int i=k; i<n; i++){
        cur_sum += arr[i] - arr[i-k];
        ans = min(ans, cur_sum);
    }
    return ans;
}

// if we have to find max put max in place of min

T.C. -- >  O(n)
S.C. -- >  O(1)
