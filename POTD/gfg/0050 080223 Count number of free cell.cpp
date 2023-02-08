// approach 

// Take a row and a column vector of n+1 size , as the values in the arr is 1-indexed.
// Also take two variables and assign n to both, as the size of row and size of column.
// check if the index of row and column is already turned to 1 or not. if not, make it 1 and decrement the ans_row and ans_col by 1.
// Then , we need to push the value of multiple of both the variables. in each step.


//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<long long int> ans;
      vector<int> row(n+1,0),col(n+1,0);
      long long int ans_row=n,ans_col=n;
      for(int i=0;i<k;i++)
      {
          int r=arr[i][0];
          int c=arr[i][1];
          if(!row[r])
          {
              row[r]=1;
              ans_row--;
          }
          if(!col[c])
          {
              col[c]=1;
              ans_col--;
          }
          ans.push_back(ans_row*ans_col);
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends





// approach 2

class Solution{
public:
    vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      unordered_set<int> st1;
      unordered_set<int> st2;
      vector<long long> vec;
      long long cnt = (long long)n*n;
      for(auto &e : arr){
          int i = e[0];
          int j = e[1];
          if(st1.find(i) == st1.end()){
              st1.insert(i);
              cnt -= n - st2.size();
          }
          if(st2.find(j) == st2.end()){
              st2.insert(j);
              cnt -= n - st1.size();
          }
          vec.push_back(cnt);
      }
      return vec;
  }
};





