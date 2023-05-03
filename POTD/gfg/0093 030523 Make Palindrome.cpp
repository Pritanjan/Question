// https://practice.geeksforgeeks.org/problems/8d0e8785cef59cf4903b926ceb7100bcd16a9835/1

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        map<string, int> mp;
        for(auto it : arr)
            mp[it]++;
         
        for(auto it : arr) { 
            reverse(it.begin(), it.end());
            mp[it]--;
        }
         
        for(auto it : mp) {
            if(it.second != 0)
            return false;
        }
        return true;
    }
};







class Solution{
public:
    bool isPalindrome(string str){
        string s = str;
        reverse(s.begin(), s.end());
        if(str == s) return true;
        return false;
    }
    
    bool makePalindrome(int n,vector<string> &v){
        string s;
        bool ans = true;
        map<string, int> mp;
        for(auto str : v) {
            mp[str]++;
            s = str;
            reverse(s.begin(), s.end());
            mp[s];
        }
        
        set<string> vs;
        for(auto pr : mp){
            s = pr.first;
            reverse(s.begin(), s.end());
            auto it = mp.find(s);
            if(pr.second > (*it).second) vs.insert(pr.first);
            else if(pr.second < (*it).second) vs.insert(s);
        }
        
        for(auto str:vs) {
            if(!isPalindrome(str))
            ans = false;
        }
        return ans;
    }
};


