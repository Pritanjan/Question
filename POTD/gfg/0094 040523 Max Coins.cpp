// https://practice.geeksforgeeks.org/problems/111fb97b983399c0ee9f34b7bae18ac76bf6f07a/1

class Solution {
public:
    int maxCoins(int n, vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        vector<vector<int>> dp(ranges.size(), vector<int>(3, -1));
        return solve(ranges, 0, 2, dp);
    }
    
    int solve(vector<vector<int>>& v, int i, int rem, vector<vector<int>>& dp) {
        // rem = number of intervals need to be chosen (remaining)
        if (rem == 0 || i == v.size()) return 0;
        
        if (dp[i][rem] != -1) return dp[i][rem];
        
        int nt = solve(v, i+1, rem, dp); // notTake
        int t = v[i][2]; // t
        
        int idx = binarySearch(v, i);
        t += solve(v, idx, rem - 1, dp); //note that we passed idx and not i+1
        return dp[i][rem] = max(t, nt);
    }
    
    int binarySearch(vector<vector<int>>& v, int i) {
        int low = i + 1, high = v.size() - 1;
        int idx = v.size(); // in case every interval is overlapping
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (v[mid][0] >= v[i][1]) {
                idx = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return idx;
    }
};



// OR

class Solution{
class Solution{
public:
    int maxCoins(int n, vector<vector<int>>& ranges){
        sort(ranges.begin(), ranges.end());
        vector<vector<int>> dp(ranges.size(), vector<int>(3, -1));
        return solve(ranges, 0, 2, dp);
    }
    
    int solve(vector<vector<int>>& v, int i, int rem, vector<vector<int>>& dp){
        // rem = number of intervals need to be choosen (remaining)
        if(rem == 0 || i == v.size()) return 0;
        
        if(dp[i][rem] != -1) return dp[i][rem];
        
        int nt = solve(v, i+1, rem, dp); // notTake
        int t = v[i][2]; // t
        
        int low = i+1, high = v.size()-1;
        int idx = v.size(); //incase, every interval is overlapping
        while(low <= high){
            int mid = (low+high)/2;
            if(v[mid][0] >= v[i][1]){
                idx = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        
        t += solve(v, idx, rem-1, dp); //note that we passed idx and not i+1
        return dp[i][rem] = max(t, nt);
    }
};
