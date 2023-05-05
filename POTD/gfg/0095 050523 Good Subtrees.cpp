// https://practice.geeksforgeeks.org/problems/df12afc57250e7f6fc101aa9c272343184fe9859/1

class Solution{
public:
    int f(Node *root, int k, unordered_set<int> &s) {
        if(!root) return 0;
        
        unordered_set<int> L, R;
        int lh = f(root->left, k, L);
        int rh = f(root->right, k, R);
        
        s = L;
        s.insert(R.begin(), R.end());
        s.insert(root->data);
        
        return s.size() <= k ? lh + rh + 1 : lh + rh; 
    }
    
    int goodSubtrees(Node *root, int k){
        unordered_set<int> s;
        return f(root, k, s);
    }
};


