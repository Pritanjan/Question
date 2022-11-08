// https://www.codingninjas.com/codestudio/problem-of-the-day/moderate?leftPanelTab=0

#include<bits/stdc++.h>
int kDistinctChars(int k, string &s){
    unordered_map<char, int> ump;
    int Lsub = 0;
    int i = 0, j = 0;
    for(i=0; i<s.size(); i++){
        ump[s[i]]++;
        
        while(ump.size() > k){
            char a = s[j];
            j++;
            ump[a]--;
            
            if(ump[a] == 0)
                ump.erase(a);
        }
        Lsub = max(Lsub, i - j + 1);
    }
    return Lsub;                            
}



