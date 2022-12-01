// https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-convert-one-string-into-another-with-given-constraints4116/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isItPossible(string s, string t, int m, int n) {
        string S , T;
        for(int i=0; i<m; i++){
            if(s[i] == 'A' or s[i] == 'B')
                S += s[i];
        }
        
        for(int i=0; i<n; i++){
            if(t[i] == 'A' or t[i] == 'B')
                T += t[i];
        }
        
        return S == T;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}





