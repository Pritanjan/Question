// https://practice.geeksforgeeks.org/problems/546ea68f97be7283a04ddcc8057e09b46a686471/1

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<int> stk;
        for(int i=0; i<N; i++){
            if(stk.empty()) stk.push(i);
            else{
                if( color[stk.top()]==color[i] && radius[stk.top()]==radius[i]) stk.pop();
                else stk.push(i);
            }
        }
        return stk.size();
    }
};








class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>>st;
        st.push({color[0],radius[0]});
        for(int i=1;i<N;i++) {
            if(!st.empty() and st.top().first==color[i] and st.top().second==radius[i]) st.pop();
            else st.push({color[i],radius[i]});
        }
        return st.size();
    }
};




