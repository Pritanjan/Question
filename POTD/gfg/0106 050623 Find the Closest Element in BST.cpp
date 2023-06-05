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
