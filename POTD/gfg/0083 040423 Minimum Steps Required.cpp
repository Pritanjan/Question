// https://practice.geeksforgeeks.org/problems/6a1b365b520f10c8a29b533eb72951b4b4237b57/1

#include <bits/stdc++.h>
using namespace std;

int minSteps(string str) {
    int count = 1;
    for(int i=1; i<str.length(); i++) {
        if(str[i] == str[i-1]) continue;
        count++;
    }
    return (count + 2)/2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}


