// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

#include <bits/stdc++.h> 
vector<string> generateBinaryNumbers(int n)
{
    queue<string> que;
    que.push("1");
    vector<string> v;
    
    while(n--){
        string s1 = que.front();
        que.pop();
        v.push_back(s1);
        
        // string s2 = s1;
        que.push(s1 + "0");
        
        que.push(s1 + "1");
    }
    return v;
}


#include <bits/stdc++.h> 
vector<string> generateBinaryNumbers(int n)
{
    queue<string> que;
    que.push("1");
    vector<string> v;
    
    while(n--){
        string s1 = que.front();
        que.pop();
        v.push_back(s1);
        
        string s2 = s1;
        que.push(s1.append("0"));
        
        que.push(s2.append("1"));
    }
    return v;
}
