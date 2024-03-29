// https://practice.geeksforgeeks.org/problems/check-if-all-levels-of-two-trees-are-anagrams-or-not/1

// https://www.geeksforgeeks.org/check-if-all-levels-of-two-trees-are-anagrams-or-not/

class Solution{
    public:
    bool areAnagrams(Node *root1, Node *root2) {
        if(root1 == NULL or root2 == NULL)
            return true;
        
        if(root1 -> data == root2 -> data){
            return areAnagrams(root1 -> left, root2 -> right) and areAnagrams(root2-> right, root1 -> left);
        }
        return false;
    }
};


// APPROACH 2 solution

class Solution{
public:
bool areAnagrams(Node *root1, Node *root2) {
    // Base Cases
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
 
    // start level order traversal of two trees
    // using two queues.
    queue<Node *> q1, q2;
    q1.push(root1);
    q2.push(root2);
 
    while (1)
    {
        // n1 (queue size) indicates number of Nodes
        // at current level in first tree and n2 indicates
        // number of nodes in current level of second tree.
        int n1 = q1.size(), n2 = q2.size();
 
        // If n1 and n2 are different
        if (n1 != n2)
            return false;
 
        // If level order traversal is over 
        if (n1 == 0)
            break;
 
        // Dequeue all Nodes of current level and
        // Enqueue all Nodes of next level
        vector<int> curr_level1, curr_level2;
        while (n1 > 0)
        {
            Node *node1 = q1.front();
            q1.pop();
            if (node1->left != NULL)
                q1.push(node1->left);
            if (node1->right != NULL)
                q1.push(node1->right);
            n1--;
 
            Node *node2 = q2.front();
            q2.pop();
            if (node2->left != NULL)
                q2.push(node2->left);
            if (node2->right != NULL)
                q2.push(node2->right);
 
            curr_level1.push_back(node1->data);
            curr_level2.push_back(node2->data);
        }
 
        // Check if nodes of current levels are
        // anagrams or not.
        sort(curr_level1.begin(), curr_level1.end());
        sort(curr_level2.begin(), curr_level2.end());
        if (curr_level1 != curr_level2)
            return false;
    }
 
    return true;
  }
};





