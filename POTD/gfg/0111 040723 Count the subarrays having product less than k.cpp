// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1

// LC 713


class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i=0; i<n; i++) {
            long long mul = 1;
            for(int j=i; j<n; j++) {
                mul = mul * nums[j];
                if(mul < k) ans++;
                else break;
            }
        }
        return ans;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long p = 1;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(a[i] < k) count++;
            p = a[i];
            for(int j=i+1; j<n; j++) {
                p *= a[j];
                if(p < k) count++;
                else break;
            }
        }
        return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}


