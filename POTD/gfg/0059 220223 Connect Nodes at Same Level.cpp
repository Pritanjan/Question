//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node* nextRight;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    temp->nextRight = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

void connect(struct Node *p);

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */


void printSpecial(Node *root)
{
   if (root == NULL)
     return;

   Node* next_root=NULL;

   while (root != NULL)
   {
      cout<< root->data<<" ";

      if( root->left && (!next_root) )
        next_root = root->left;
      else if( root->right && (!next_root)  )
        next_root = root->right;

      root = root->nextRight;
   }
   
   printSpecial(next_root);
}

void inorder(Node *root)
{
    if (root == NULL)
       return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


// } Driver Code Ends
/* struct Node {
    int data;
    Node* left;
    Node* right;
    Node* nextRight;
};*/


class Solution{
public:
    void connect(Node *root) {
       queue<Node*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            Node* prev = NULL;
            for(int i = 1 ; i <= n ; i++){
                Node* cur = que.front();
                que.pop();
                cur->nextRight = prev;
                if(cur->right) que.push(cur->right);
                if(cur->left) que.push(cur->left);
                prev = cur;
            }
        }
    }    
};




//{ Driver Code Starts.


/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d\n", &t);
  while (t--)
  {
     string s;
     getline(cin, s);
     Node* root = buildTree(s);
        
    Solution obj;
     obj.connect(root);
     printSpecial(root);
     cout<<endl;
     inorder(root);
     cout<<endl;
  }
  return 0;
}

// } Driver Code Ends






// 2nd

class Solution{
  
    public:
    void connect(Node *root)
    {
        // creating queue for level order traversal of tree
        queue <Node*> q;
        q.push(root);
        
        Node* prev=NULL;
        // prev hold the value of previous node on the particular level
        Node* end = root, *nextend;
        // end will hold value of last node of a level
        // and nextend will store the same for the next level
        
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            if(temp->left) { q.push(temp->left); nextend = temp->left; }
            if(temp->right){ q.push(temp->right); nextend = temp->right; }
            // storing all available nodes and updating nextend
            
            if(prev) prev->nextRight = temp;
            // setting nextRight of previous node of that level
            
            if(temp == end)
            {
                // If we've reached the end of a level, we need to :
                // 1. Set nextRight of the node to NULL
                temp->nextRight = NULL;
                // 2. Make sure that it doesnt get connected to node of next level
                prev = NULL;
                // 3. Set the value of end for next level
                end = nextend;
            }
            // If not at end of a level, we need to make sure that 'prev' gets
            // the address of current node before we move to the next one
            else prev = temp;
        }
    }
    
};





