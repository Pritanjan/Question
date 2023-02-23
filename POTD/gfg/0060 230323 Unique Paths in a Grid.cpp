// https://practice.geeksforgeeks.org/problems/96161dfced02d544fc70c71d09b7a616fe726085/1

const int mod = 1e9 + 7;

int recurse(int i, int j, int n, int m, vector<vector<int>>& arr, vector<vector<int>>& dp) {
    // Base Cases
    
    // If we get out of the array, we return 0
    if (i > n || j > m || arr[i][j] == 0) {
        return 0;
    }
    
    // If we reach the last cell, we return 1 as in 1 way to reach last cell found
    if (i == n && j == m) {
        return 1;
    }
    
    // If DP array at current cell doesn't have a default value, it means we can use the previous result
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    
    // If not, we store the current result in the DP array
    dp[i][j] = (recurse(i, j+1, n, m, arr, dp) + recurse(i+1, j, n, m, arr, dp)) % mod;
    
    return dp[i][j];
}

int uniquePaths(int n, int m, vector<vector<int>>& grid) {
    // If first or last cell is 0, meaning we can't reach the last cell, so return 0 ways
    if (grid[0][0] == 0 || grid[n-1][m-1] == 0) {
        return 0;
    }
    
    // Initializing 2D DP array
    vector<vector<int>> dp(n, vector<int>(m, -1));
    
    // Returning the answer from recurse function
    return recurse(0, 0, n-1, m-1, grid, dp) % mod;
}
