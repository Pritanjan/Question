// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
public:
	string FirstNonRepeating(string A){
	    map<int, int> mp;
		queue<char> q;
        string ans="";
        
        for(int i=0; i<A.size(); i++) {
            mp[A[i]]++;
            if(mp[A[i]]==1) q.push(A[i]); 
            
            while(mp[q.front()] > 1 && q.size()) q.pop();
              
            if(q.size()!=0) ans.push_back(q.front());
            else ans.push_back('#');
              
        }
        return ans;
	}
};



string FirstNonRepeating(string A) {
    vector<pair<char, int>> v;
    string s = "";
    for (int i = 0; i < A.length(); i++) {
        // search A[i] in v
        bool found = false;
        for (pair<char, int>& p : v) {
            if (p.first == A[i]) {
                p.second++;
                found = true;
            }
        }
        if (!found) v.push_back({A[i], 1});

        // find first non repeating
        bool nr = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i].second == 1) {
                s += v[i].first;
                nr = true;
                break;
            }
        }
        if (!nr) s += '#';
    }
    return s;
}

