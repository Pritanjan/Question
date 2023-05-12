// https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1


class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int ind = -1;
        int ans = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0 && ind != i-1){
                ans += 1;
                ind = i;
            }
            if(arr[i] == 0) cnt++;
        }
        
        if(arr[n-1] != 0) ans++;
        if(cnt == n) return 0;
        if(ind == -1) return -1;
        return ans;
    }
};


