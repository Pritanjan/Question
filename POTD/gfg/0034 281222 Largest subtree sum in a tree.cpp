// https://practice.geeksforgeeks.org/problems/largest-subtree-sum-in-a-tree/1

// APPROACH 1 RECURSION

class Solution {
  public:
    // Function to find largest subtree sum.
    int sum(Node* root, int &Maxsum){
        if(root == NULL)
            return 0;
        
        int Lsum = sum(root -> left,  Maxsum);
        int Rsum = sum(root -> right, Maxsum);
        int sum = root -> data + Lsum + Rsum;
        
        Maxsum = max(sum, Maxsum);
        
        return sum;
    }
    
    int findLargestSubtreeSum(Node* root) {
        int Maxsum = 0;
        sum(root, Maxsum);
        return Maxsum;
    }
};





// APPROACH 2

class Solution {
  private:
    int res = -1e9;
  public:
    // Function to find largest subtree sum.
    int sum(Node* root){
        if(root == NULL) return 0;
        
        int MaxSum = root -> data + sum(root->left) + sum(root->right);
        res = max(res, MaxSum);
        return MaxSum;
    }
    
    int findLargestSubtreeSum(Node* root) {
        sum(root);
        return res;
    }
};
