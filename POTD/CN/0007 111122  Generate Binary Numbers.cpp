// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

// APPROACH 1
// A simple and intuitive approach could be to generate all the decimal numbers from 1 to N  
// and convert each of them to their corresponding binary representation.




    
// APPROACH 2
// Instead of converting every decimal number to its binary form, we can use a queue 
// data structure to directly generate the binary numbers. Using a queue we can generate 
// the new binary numbers from the previously generated ones.

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
