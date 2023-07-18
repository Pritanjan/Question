// https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int dp[1001][1001];
    int helper(int i, int j, string& str){
        if(i >= str.size() or j >= str.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int res = 0;
        if(str[i] == str[j] and i != j) res = max(res,1+helper(i+1,j+1,str));
        else res = max({res, helper(i+1, j, str), helper(i, j+1, str)});
        
        return dp[i][j]= res;
    }
	
	int LongestRepeatingSubsequence(string str){
	    memset(dp, -1, sizeof(dp));
	    return helper(0, 0, str);
	}
};

int main(){  
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}



