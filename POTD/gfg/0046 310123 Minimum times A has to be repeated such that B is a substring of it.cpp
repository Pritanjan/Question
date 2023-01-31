// 1. This seems to be a very easy question, as we only need to see in how many moves
//    string B can be present in A.
// 2. So for that, its common snese that length of A should be alteast >= B length
// 3. So do it, while(A.length<B.length) go on adding A to rep string; and increase the counter
// 4.  Now check if A containss B, return cnt
// 5. For safer side, add A one more time and see again if we satisfy the condition
// 6. return cnt
// 7. else return -1;


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        string rep = A;
        int cnt=1;
        while(A.size()<B.size()){
            A+=rep;
            cnt++;
        }
       
        if(A.find(B)!=-1) return cnt;
         A+=rep;
         cnt++;
        if(A.find(B)!=-1) return cnt;
        return -1;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends







