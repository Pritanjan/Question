// https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1


class Solution {
public:
    int minDiff(Node *root, int k) {
        int res = INT_MAX;
        if(!root) return -1;
        
        while(root != NULL){
            if(root -> data == k) return 0;
            else{
                res = min(res, abs(root -> data - k));
                
                if(root -> data < k) root = root -> right;
                else root = root -> left;
            }
        }
        return res;
    }
};







class Solution {
public:
    // Function to find the least absolute difference
    // between any node value of the BST and the given
    // integer.
    int ans = INT_MAX;

    void dfs(Node* root, int k)
    {
        if (!root)
            return;
        ans = min(ans, abs(root->data - k));
        dfs(root->left, k);
        dfs(root->right, k);
    }

    int minDiff(Node* root, int K)
    {
        dfs(root, K);
        return ans;
    }
};

