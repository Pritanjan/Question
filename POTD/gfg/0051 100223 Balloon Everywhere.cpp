class Solution{
public:
    int maxInstance(string s){
        // int[] v=new int[26];
        vector<int> v(26);
        for(int i=0; i<s.size(); i++){
            v[s[i] -'a']++;
        }
        
        //balloon ->0-a,1-b,11-l,14-o,13-n
        return min(min(v[0],v[1]), min(min(v[11]/2,v[14]/2),v[13]));
    }
};



class Solution{
public:
    int maxInstance(string s){
        unordered_map<int, int> ump;
        
        for(auto i : s){
            ump[i]++;
        }
        
        return min({ump['b'], ump['a'], ump['n'], ump['l']/2,  ump['o']/2});
    }
};


