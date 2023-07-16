// APPROACH 1 USING STACK
// element ko queue se nikal ko stack me dalo

class Solution {
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


// T.C.  -->  O(N)
// S.C.  -->  O(N)







// APPROACH 2 RECURSION

class Solution {
public:
     void reverseQueue(queue<int>& q) {
        // base case
        if (q.size() == 0) return ;
        
        int fr = q.front();
        q.pop();
        
        reverseQueue(q);
        q.push(fr);
    }

    queue<int> rev(queue<int> q) {
        reverseQueue(q);
        return q;
    }
};


// T.C.  -->  O(N^2)
// S.C.  -->  O(N)






