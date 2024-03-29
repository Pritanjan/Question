// https://practice.geeksforgeeks.org/problems/d25f415de2ff3e02134de03e17ad019d723ab2e9/1

class Solution{   
public:
    long long solve(int X,int Y,string S){
        long long ans;
        if(X < Y) ans = f(Y, X, S, 'r', 'p');
        else ans = f(X, Y, S, 'p', 'r');
      
        return ans;
    }
    
    long long f(int x, int y, string s, char c1, char c2) {
        stack<char> st;
        long long ans = 0;
        for(int i=0; i<s.length(); i++) {
            char c = s[i];
            if(c==c2) {
                if(st.size() > 0 && st.top() == c1){
                    st.pop();
                    ans += x;
                } else {
                    st.push(c);
                }
                
            }else {
                st.push(c);
            }
        }
        
        stack<char> st1;
        while(st.size() > 0) {
            if(st.top() == c2) {
                if(st1.size() > 0 && st1.top() == c1) {
                    ans += y;
                    st1.pop();
                    st.pop();
                } else {
                    st1.push(st.top());
                    st.pop();
                }
            } else {
                st1.push(st.top());
                st.pop();
            }
        }
        return ans;
    }
};

