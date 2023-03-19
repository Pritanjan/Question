// https://practice.geeksforgeeks.org/problems/c670bf260ea9dce6c5910dedc165aa403f6e951d/1

// Approach:

// As we have to keep track of number of distinct element on both left and right for every
// index of array A[], set can be a better choice for that.

// Step 1: Declare two set one for left distinct elements and other for right.
// Step 2: traverse in Array from 0 to N-1 and for every index i first calculate size of 
//         left set and store value in lft[i] (initially it contain no elements thus
//         ls[0]=0) then insert A[i] to left set
// Step 3: to calculate distinct element from right we have to traverse from end 
//         (N-1 to 0 index) and we can get that by formula N-i-1and for every index N-i-1 
//         first calculate size of right set and store value in rgt[N-i-1].
// Step 4: create vector ans of size N and traverse from i=0 to N-1 and store the
//         difference between right and left distinct elements(lft[i]-rgt[i]). 
// Step 5: return ans vector.
  
  



class Solution {
public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        set<int> ls,rs;
        vector<int > lft(N),rgt(N),ans(N);
        
        for(int i=0;i<N;i++)
        {
            lft[i]=ls.size();
            ls.insert(A[i]);
            rgt[N-i-1]=rs.size();
            rs.insert(A[N-i-1]);
        }
        
        for(int i=0;i<N;i++)
        {
            ans[i]=lft[i]-rgt[i];
        }
        return ans;
        // code here
    }
};

