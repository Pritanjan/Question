// https://practice.geeksforgeeks.org/problems/de6f6a196aecdfb3e4939ba7729809a5a4bdfe90/1

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
                // code here
        vector<Node*>ans;
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        Node*temp=head;
        unordered_map<char,int>sol=mp;
      
        while(temp){
            Node*curr=temp;
            Node*next=NULL;
            while(curr){
               
                if(sol.find(curr->data)!=sol.end()){
                    sol[curr->data]--;
                    if(sol[curr->data]==0)sol.erase(curr->data);
                    if(sol.size()==0){
                         next=curr->next;
                        curr->next=NULL;
                    
                        ans.push_back(temp);
                        
                    }
                    if(sol.size()==0)break;
                   curr=curr->next;
                    
                }
                else {
                    break;
                }
            }
            if(sol.size()==0){
                temp=next;
            }
            else {
                temp=temp->next;
            }
            
            sol=mp;
        }
        return ans;
        
    }
};





