// https://practice.geeksforgeeks.org/problems/5551749efa02ae36b6fdb3034a7810e84bd4c1a4/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        set<int> s;
        for (int i=0; i<N; i++) {
            if (s.find(frogs[i]) != s.end()) continue;
            int k = frogs[i];
            while (frogs[i] <= leaves) {
                s.insert(frogs[i]);
                frogs[i] += k;
            }
        }
        return leaves - s.size();
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}



// It initializes an empty set to keep track of the visited leaves. Then, for each frog, 
// the function checks if it has already been encountered before. 
// If yes, it skips to the next frog, otherwise, it starts checking the leaves it 
// will visit. The function computes the number of leaves that a frog can visit 
// by adding its strength k repeatedly to the starting point frogs[i] until 
// it reaches the end of the pond leaves. 
// For each visited leaf, the function adds its index to the set.
// Finally, the function returns the difference between the total number of leaves 
// and the size of the set, which gives the number of leaves that have not been
// visited by any frog.











int unvisitedLeaves(int N, int leaves, int frogs[]) {
    bool leavesArr[leaves + 1];
    memset(leavesArr, false, sizeof(leavesArr)); // initialize all values as false

    for(int i = 0; i < N; i++) {
        int frogJump = frogs[i];
        if(frogJump == 1) {
            return 0; // a frog with strength 1 can cover all leaves
        }
        if(frogJump <= leaves && leavesArr[frogJump] == false) {
            for(int jump = frogJump; jump <= leaves; jump += frogJump) {
                leavesArr[jump] = true;
            }
        }
    }

    int notVisited = 0;
    for(int i = 1; i <= leaves; i++) {
        if(leavesArr[i] == false) {
            notVisited++;
        }
    }

    return notVisited;
}


// The function uses a boolean array leavesArr to keep track of which leaves
// have been visited by at least one frog. 
// The function returns the number of leaves that have not been visited by any frog. 










int unvisitedLeaves(int N, int leaves, int frogs[]) {
    bool leavesArr[leaves + 1];
    memset(leavesArr, false, sizeof(leavesArr)); // initialize all values as false
  
    for(int i = 0; i < N; i++) {
        int frogJump = frogs[i];
        if(frogJump == 1) return 0;

        if(frogJump <= leaves && leavesArr[frogJump] == false) {
            for(int jump = frogJump; jump <= leaves; jump += frogJump) {
                leavesArr[jump] = true;
            }
        }
    }

    int notVisited = 0;
    for(int i = 1; i <= leaves; i++) {
        if(leavesArr[i] == false) {
            notVisited++;
        }
    }

    return notVisited;
}



// It uses memset function from <bits/stdc++.h> library to initialize the boolean array 
// with false values. 
// It sets the first parameter to the value of the second parameter for a given number 
// of bytes (the third parameter).









