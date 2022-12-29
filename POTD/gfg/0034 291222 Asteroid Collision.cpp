// https://practice.geeksforgeeks.org/problems/asteroid-collision/1

Approach:

1. Since we have positive and negative values and their absolute values are going to be considered, so we need a type of data structure that can differentiate these two type of values, stack will be a good choice.

Now question comes, why stack? Let's try to understand.

2. We will start traversing the asteroids array from beginning, and let's say if value is positive, we will directly push it into the stack(i.e., we are storing the right direction moving asteroids in separate stack)

3. If we get a negative value, i.e., opposite direction asteroid, then we need to apply conditions according to the question:

We will compare this value with top of the stack, bcoz stack is containing the opposite direction asteroids and will take part in collision.

If the absolute of current negative value(i.e., it's size) is greater than the top of stack, then we will pop it out according to question, and we will keep on doing it till this condition gets true.

After this, we can have three choices,

1. the stack becomes empty, i.e., the negative asteroid has greater size than all opposite direction asteroids, so simply push it into answer vector.

2. or the size of negative asteroid is less than the top value, then do nothing in this case, keep the positive value in the stack for further negative values.

3. or the negative value has same size as stack top value, in this case, both will collide, so simply pop the value.

 

After all this steps, whatever left in the stack, the reverse order will be the remaining answer, push these stack elements into answer vector after reversing 

 //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &asteroids) {
        vector<int> v;
        stack<int> st;
        
        for(int i=0; i<n; i++){
            if(asteroids[i] > 0)  
                st.push(asteroids[i]);
            else{
                if(st.empty())
                    v.push_back(asteroids[i]);
                else{
                    while(!st.empty() && (-1 * asteroids[i]) > st.top())
                        st.pop();
                    if(!st.empty() && (-1 * asteroids[i]) == st.top()) 
                        st.pop();
                    else if(st.empty())
                         v.push_back(asteroids[i]);
                }
            } 
        }
        
        vector<int>p ;
        while(!st.empty()){
            p.push_back(st.top());
            st.pop();
        }
        
        reverse(p.begin(), p.end());
        v.insert(v.end(), p.begin(), p.end());
        
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
