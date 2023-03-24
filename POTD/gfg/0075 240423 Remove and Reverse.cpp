// https://practice.geeksforgeeks.org/problems/1e2f365be6114b671b915e145ec7dbcfdc432910/1


string removeReverse(string S) {
    unordered_map<char, int> map;
    int i=0, j=S.length()-1;
    bool rev = false;
    unordered_set<int> del;
    
    for(char ch : S){
        map[ch]++;
    }
    
    while(i<j){
        char first = S[i];
        char last = S[j];
        
        if(!rev){
            if(map[first] > 1){
                map[first]--;
                del.insert(i);
                rev = !rev;
            }
            i++;
        } else {
            if(map[last] > 1){
                map[last]--;
                del.insert(j);
                rev = !rev;
            }
            j--;
        }
    }
    string ans = "";
    
    for(i=0; i<S.length(); i++) if(!del.count(i)) ans += S[i];

    if(rev) reverse(ans.begin(), ans.end());
    
    return ans;
}




