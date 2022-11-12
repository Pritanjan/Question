// https://practice.geeksforgeeks.org/problems/maximum-sub-string-after-at-most-k-changes3220/1
// https://www.geeksforgeeks.org/maximum-length-substring-having-all-same-characters-after-k-changes/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int find(string &s, int k, int ch){
	        int max_len = 1;
	        int cnt = 0, L = 0, R = 0;
	        
	        while(R < s.size()){
	            if(s[R] != ch)
	                cnt++;
	            
	            while(cnt > k){
	                if(s[L] != ch){
	                    cnt--;
	                }
                    L++;
	            }
	            max_len = max(max_len, R - L + 1);
	            R++;
	        }
	        return max_len;
	    }
	    
		int characterReplacement(string s, int k){
		    int max_len = 1;
		    for(int i=0; i<26; i++){
		        max_len = max(max_len, find(s, k, i + 'A'));
		    }
		    return max_len;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends


// Time Complexity: O(n)
// Auxiliary Space: O(1)

