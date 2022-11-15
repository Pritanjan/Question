// https://practice.geeksforgeeks.org/problems/sum-of-beauty-of-all-substrings-1662962118/1


Algorithm :-

Step 1 :- Generate all Substring.

Step 2 :- At the time of genrating Substring starting at fixed index, we store frequency of each character and from that we find value of beauty.

Step 3 :- Add this all beauty and return as answer.
  
  
int beautySum(string s) {
        // Your code goes here
        int ans=0;
        for(int i=0;i<s.length();i++) {
            vector<int> fre(26,0);
            for(int j=i;j<s.length();j++) {
                fre[s[j]-'a']++;
                ans+=findBeauty(fre);
            }
        }
        return ans;
    }
    
int findBeauty(vector<int> fre) {
  int mx=INT_MIN,mn=INT_MAX;
  for(int f : fre) {
      if(f==0) continue;
      mx = max(mx,f);
      mn = min(mn,f);
  }
  return mx-mn;
}






