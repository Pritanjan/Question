// https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1

// APPROACH 1


class Solution {
public:
    int mini = INT_MAX, maxi = INT_MIN;
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
        if(root==NULL) return;
        
        if(root->key < key && root->key >= maxi) {
            pre = root;
            maxi = max(maxi, root->key);
        }
        if(root->key > key && root->key <=mini) {
            suc = root;
            mini = min(mini, root->key);
        } 
        findPreSuc(root->left, pre, suc,key);
        findPreSuc(root->right, pre, suc,key);
    }
};


