// https://practice.geeksforgeeks.org/problems/construct-binary-tree-from-string-with-bracket-representation/1

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left
child and a pointer to right child */
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

/* This function is to print the inorder of the tree  */
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



// } Driver Code Ends
//User function Template for C++

/*
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};
*/


class Solution{
public:
    // function to construct tree from string
    Node *treeFromString(string str){
        string s = "";
        
        int i=0;
        
        while(i < str.size() and str[i] != '(' and str[i] != ')'){
            s += str[i++];
        }
        
        int a = stoi(s);
        
        Node* nde = new Node(a);
        stack<Node*> st;
        st.push(nde);
        
        for(i=0; i<str.size(); i++){
            if(str[i] == '('){
                s = "";
                while(str[i+1] != '(' and str[i+1] != ')'){
                    i++;
                    s += str[i];
                }
                a = stoi(s);
                Node* temp = new Node(a);
                if(!st.top() -> left)   st.top() -> left = temp;
                else st.top() -> right = temp;
                
                st.push(temp);
            }
            else if(str[i] == ')')
                st.pop();
        }
        return nde;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution obj;
        Node *root = obj.treeFromString(str);
        inorder(root);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends









