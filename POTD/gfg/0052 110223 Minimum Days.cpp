// https://practice.geeksforgeeks.org/problems/f4d22b1f9d62e8bee0ff84e9fa51dc66eb5005ec/1

// APPROAH 1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int ans = 0;
        int i = 0;
        
        while(i < N-1){
            if(S[i] != '?') {
                if(S[i] != S[i+1]) {
                    i++;
                    continue;
                }
                else {
                    S[P[ans]]='?';
                    ans++;
                }
            }
            else
                i++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends








// APPROAH 2

class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int count = 0;
        for(int i=0; i<N; i++) {
            char c = S[P[i]];
            if((P[i] == 0 && S[P[i]+1] == c) || (P[i] == N-1 && S[P[i]-1] == c) || ((S[P[i]-1] == c) || (S[P[i]+1] == c))) {
                S[P[i]] = '?';
                count = i+1;
            }
        }
        return count;
    }
};




// APPROAH 3

A Binary Search Solution!!

bool ispossible(int mid, string s, vector<int> &p)

    {

        for(int i = 0; i < mid; i++)

        {

            s[p[i]] = '?';

        }

        for(int i = 0; i < s.length()-1; i++)

        {

            if(s[i] == s[i+1] && s[i] != '?') return 0;

        }

        return true;

    }

  public:

    int getMinimumDays(int N,string s, vector<int> &p) {

        int l = 0, r = N;

        int ans = N;

        while(l <= r)

        {

            int mid = l - (l - r) / 2;

            if(ispossible(mid, s, p)){

                ans = mid;

                r = mid - 1;

            }

            else{

                l = mid + 1;

            }

        }

       return ans;

