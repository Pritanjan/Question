// https://practice.geeksforgeeks.org/problems/bae68b4d6a2a77fb6bd459cf7447240919ebfbf5/1

//  reverse the first k nodes.

//  pass the next pointer with INT_MAX. The while loop won't run infinite because it'll stop when the cur becomes null.



class Solution
{
public:

    Node *reverse(Node *head, int k)
    {
        Node* prev = NULL;
        Node* next = NULL;
        Node* curr = head;
        
        int i = 0;
        while(curr != NULL && i < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            i++;
        }
        if(next == NULL) return prev;
        
        head->next = reverse(next, INT_MAX);
        return prev;
    }
};



