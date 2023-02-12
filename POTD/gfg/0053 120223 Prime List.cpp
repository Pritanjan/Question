// https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1

class Solution{
public:
    bool isPrime(int n){
        if(n == 0 or n == 1) return 0;
        
        for(int i=2; i*i<=n; i++){
            if(n % i == 0) return 0; 
        }
        return true;
    }
    
    int prime(int n){
        if(isPrime(n))return n;
        int i=1;
        while(true){
            if(isPrime(n-i))return n-i;
            if(isPrime(n+i))return n+i;
            i++;
        }
    }
    
    Node *primeList(Node *head){
        Node *temp = head;
        while(temp != NULL){
            temp -> val = prime(temp -> val);
            temp = temp -> next;
        }
        return head;
    }
};
