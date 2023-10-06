// https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

// A 1

class Solution {
public:
    Node* rev(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }    
    void rearrange(struct Node *odd) {
        Node* prev = odd;
        Node* head = odd -> next;
        Node* curr = odd -> next;
        while(curr != NULL && curr -> next != NULL) {
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            prev -> next = temp;
            prev = prev -> next;
            curr = curr -> next;
        }
        head = rev(head);
        prev -> next = head;
    }
};






