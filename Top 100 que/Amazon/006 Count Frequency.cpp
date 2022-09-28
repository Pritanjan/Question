// https://www.codingninjas.com/codestudio/problems/count-frequency_920323?topList=top-amazon-coding-interview-questions&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> findFrequency(string s) {
	vector<int> freq(26,0);
    for(int i=0; i<s.size(); i++){
        freq[s[i] - 'a']++;
    }
    return freq;
}

