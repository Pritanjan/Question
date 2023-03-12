// https://practice.geeksforgeeks.org/problems/2d3fc3651507fc0c6bd1fa43861e0d1c43d4b8a1/1

class Solution {
  public:
    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {
        // code here
        long long ans=0;
        int mini=INT_MAX;
        long long count=0;
        
        for(int i=0;i<N;i++)
        {
            // rectangles
            // B[i] -> number of sticks available
            
            int rect_pair=B[i]/2;
            ans+=(2*rect_pair*A[i]);
            mini=min(mini,A[i]);
            count+=rect_pair;
        }
        if(count%2!=0) ans-=(2*mini);
        return ans;
    }
};

