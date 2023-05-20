// https://practice.geeksforgeeks.org/problems/hands-of-straights/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int n, int groupSize, vector<int> &hand) {
        // code here
        if(n % groupSize != 0) return false;
        
        multiset<int> mt(hand.begin(), hand.end());
        while(!mt.empty()){
            int mi = *mt.begin(); 
            mt.erase(mt.begin());
            
            for(int i=1; i<groupSize; i++){
                int next = mi + i;
                if(!mt.count(next)) return false;
                mt.erase(mt.find(next));
            }
        }
        return true;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}

