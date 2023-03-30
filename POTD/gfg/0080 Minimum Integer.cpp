// https://practice.geeksforgeeks.org/problems/1ccf56f107bcb24242469ea45c02f852165a2184/1


class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        long long int sum = 0;
        for(int i = 0; i<N; i++) sum += A[i];
        
        int ans = INT_MAX;
        for(int i = 0; i<N; i++){
            int ele = A[i];
            if(sum <= ( long long )N*ele){
                ans = min(ans , ele);
            }
        }
        return ans;
    }
};

