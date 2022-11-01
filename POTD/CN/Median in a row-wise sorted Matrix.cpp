// https://www.codingninjas.com/codestudio/problems/median-of-a-row-wise-sorted-matrix_1115473?leftPanelTab=2

// APPROACH 1

int findMedian(vector<vector<int>> &matrix, int m, int n) {
    vector<int> v;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            v.push_back(matrix[i][j]);
        }
    }
    
    sort(v.begin(), v.end());
    return v[v.size()/2];
}

// Time Complexity: O((M * N) * log(M * N))
// Space complexity: O(M * N)
// Where 'M' denotes the number of rows and 'N' denotes the number of columns of the matrix.


// APPROACH 2

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int binarySearch(vector<vector<int>> &matrix, int R, int low, int high, int RI){
        if(high > low){
            int mid = (low + high)/2;
            int CI = 0;
            
            for(int i=0; i<R; i++){
                CI += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(CI < RI)
                return binarySearch(matrix, R, mid + 1, high, RI);
            else
                return binarySearch(matrix, R, low, mid, RI);
        }
        return low;
    }
    
    int median(vector<vector<int>> &matrix, int R, int C){
        int low = matrix[0][0];
        int high = matrix[0][C-1];;
        for(int i=0; i<R; i++){
            low = min(matrix[i][0], low);
            high = max(matrix[i][C-1], high);
        }
        
        int RI = (R*C+1)/2;
        return binarySearch(matrix, R, low, high, RI);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends

// Time Complexity: O(32 * M * log(N))
// Space complexity: O(1)



