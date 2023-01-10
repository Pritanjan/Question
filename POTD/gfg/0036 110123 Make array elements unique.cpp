// https://practice.geeksforgeeks.org/problems/6e63df6d2ebdf6408a9b364128bb1123b5b13450/1

// Make array elements unique

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        sort(arr.begin(), arr.end());
        long long int cnt = 0;
        for(int i=1; i<N; i++) {
            if(arr[i - 1] >= arr[i]) {
                cnt += arr[i - 1] - arr[i] + 1;
                arr[i] = arr[i - 1] + 1;
            }
        }
        return cnt;
    }
};

