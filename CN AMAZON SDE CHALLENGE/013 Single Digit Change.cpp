// https://www.codingninjas.com/codestudio/problems/single-digit-change_1463972?topList=amazon-sde-challenge&leftPanelTab=0

#include <bits/stdc++.h> 
int findMaxNum(int num) {
    string s = to_string(num);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '6'){
            s[i] = '9';
            num = stoi(s);
            break;
        }
    }
    return num;
}


T.C. --> O(N)
S.C. --> O(N)
    
    N IS the size of digit in num
