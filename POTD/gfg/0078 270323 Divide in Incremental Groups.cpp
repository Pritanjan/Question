// https://practice.geeksforgeeks.org/problems/c239059f6d110e6778cc2f2a1ab58ffd0a3d64ca/1



int dp[101][101][101];
class Solution {
public:
    int countWaystoDivide(int N, int K) {
        for (int j = 1; j <= N; j++) {
            dp[0][j][0] = 1;
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                for (int k = 1; k <= K; k++) {
                    dp[i][j][k] = dp[i][j - 1][k];
                    if (j <= i) {
                        dp[i][j][k] += dp[i - j][j][k - 1];
                    }
                }
            }
        }
        return dp[N][N][K];
    }
};






#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWaystoDivide(int N, int K) {
        unordered_map<string, int> cache;
        return count(N, K, 1, cache);
    }
    
    int count(int n, int k, int mv, unordered_map<string, int>& cache) {
        if (k > n || k < 0 || n < 0) {
            return 0;
        }
        
        if (k == 0 && n == 0) {
            return 1;
        }
        
        string key = to_string(n) + "|" + to_string(k) + "|" + to_string(mv);
        if (cache.count(key)) {
            return cache[key];
        }
        
        int ans = 0;
        for (int v = mv; v <= n - (k - 1); v++) {
            ans += count(n - v, k - 1, v, cache);
        }
        
        return cache[key] = ans;
    }
};








int f(int num,int N,int K,vector<vector<vector<int>>>& dp) {
      if(K==0)
      {
          if(N==0) return 1;
          return 0;
      }

      if(dp[num][N][K]!=-1) return dp[num][N][K];

      int ways=0;
      for(int i=num;i<=N;i++)
      {
          ways+=f(i,N-i,K-1,dp);
      }
      return dp[num][N][K]=ways;
  }
  int countWaystoDivide(int N, int K) {
      vector<vector<vector<int>>> dp(N+1,vector<vector<int>>(N+1,vector<int>(K+1,-1)));
      return f(1,N,K,dp);
  }










