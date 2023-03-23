// https://practice.geeksforgeeks.org/problems/e841e10213ddf839d51c2909f1808632a19ae0bf/1

class Solution{
public:
     int leaf(Node* root) {
        if(root -> left && root -> right) return root -> data + min(leaf(root -> left), leaf(root -> right));
        else if(root -> right) return root -> data + leaf(root -> right);
        else if(root -> left) return root -> data  +  leaf(root -> left);
        else return root -> data;
    }
    
    int BST(Node* root, int& n, int& sum) {
        if(root -> data == n) return leaf(root)-root->data;
        else if(root -> data > n  &&  root -> left){
            sum += root -> data;
            return BST(root -> left, n, sum);
        }
        else if(root -> data < n  && root -> right){
            sum += root -> data;
            return BST(root -> right, n, sum);
        }
        else return -1;
    }
    
    int maxDifferenceBST(Node *root, int target){
        int sum = 0;
        int l = BST(root, target, sum);
        return l != -1 ? sum -l : -1;
    }
};
