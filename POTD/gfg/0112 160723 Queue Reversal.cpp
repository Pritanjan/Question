// APPROACH 1 USING STACK
// element ko queue se nikal ko stack me dalo

class Solution{
public:
    queue<int> rev(queue<int> que) {
        stack<int> stk;
        while(!que.empty()) {
            stk.push(que.front());
            que.pop();
        }
        
        while(!stk.empty()) {
            que.push(stk.top());
            stk.pop();
        }
        return que;
    }
};






// APPROACH 2 RECURSION




