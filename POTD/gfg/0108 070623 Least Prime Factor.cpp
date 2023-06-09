// https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1


class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> ans(n+1, 0);
        for(int i=2; i*i<=n; i++) {
            if(ans[i] == 0) {
                for(int j= i*i; j<=n; j+=i)
                if(ans[j] == 0)
                ans[j] = i;
            }
        }
        
        for(int i=0; i<=n; i++) 
          if(ans[i] == 0) ans[i] = i;
        return ans;
    }
};


// or 



class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> res(n+1,0);
        res[1]=1;
        
        for(int i=1; i<=n; i++){
            if(res[i]==0){
                for(int j=i; j<=n; j+=i){
                    if(res[j]==0){
                        res[j]=i;
                    }
                }
            }
        }
        return res;
    }
};

