// https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-convert-one-string-into-another-with-given-constraints4116/1

// APPROACH 1

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



// APPROACH 2

// If the sizes of the two strings are not the same, then the strings can never be the same.

// If the frequency of A and B in the two strings are not the same, then the strings can never
// be the same.

// Back-end complete function Template for C++
class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        int i=0, j=0;
        if(M!=N) return 0;
        
        while(i<M || j<N){
            while(S[i]=='#') i++;
            while(T[j]=='#') j++;
            
            if(i>=M && j<N) return 0;
            if(i<M && j>=N) return 0;
            
            if(S[i] != T[j]) return 0;
            else{
                if(S[i]=='A' && i<j) return 0;
                else if(S[i]=='B' && i>j) return 0;
            }
            i++;
            j++;
        }        
        return 1;
    }
};

    

