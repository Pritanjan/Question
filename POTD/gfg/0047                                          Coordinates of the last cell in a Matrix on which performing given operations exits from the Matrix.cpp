// https://practice.geeksforgeeks.org/problems/2e068e2342b9c9f40cfda1ed8e8119542d748fd8/1

I got a slightly different logic then what all is posted here, so I am going to share it. 
If we oberse closely the directions are changing by a step ahead, i.e.,

right->down, down->left, left->up, up->right.

What we can do here is define an array to move in these directions and increment the index of direction array whenever we encounter any 1's. 
  
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        // right, down, left, up ->array
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int n = matrix.size(), m = matrix[0].size();
        int i=0, j=0, k=0;
        pair<int, int> ans;
        while(i>=0 && j>=0 && i< n && j<m){
            ans = {i, j};
            if(matrix[i][j]==1){
                matrix[i][j]=0;
                // using modulus so our index will never go out of bound
                k = (k+1)%4; 
            }
            i = i+dir[k].first;
            j = j+dir[k].second;
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends



