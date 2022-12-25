//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long int

class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // find the pos of 0
        int row = -1, col = -1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        
        // find row sum
        ll RowSum = 0;
        if(row != 0){
            for(int i=0; i<m; i++){
                RowSum += matrix[0][i];
            }
        }
        else if(m > 0){
            for(int i=0; i<m; i++){
                RowSum += matrix[1][i];
            }
        }
        
        
        // find the replacable value of 0
        ll res = RowSum;
        for(int i=0; i<m; i++){
            res -= matrix[row][i];
        }
        if(res <= 0) 
             return -1;
        
        // check all row sum is same as RowSum
        for(int i=0; i<m; i++){
            ll sum = 0;
            for(int j=0; j<m; j++){
                if(row == i and col == j)
                    sum += res;
                else
                    sum += matrix[i][j];
            }
            if(sum != RowSum)
                return -1;
        }
        
        // Check if all column sum is same as row_sum
        for(int i=0; i<m; i++){
            ll sum1 = 0;
            for(int j=0; j<m; j++){
                if(row == j && col == i)
                    sum1 += res;
                else
                    sum1 += matrix[j][i];
            }
            if(sum1 != RowSum)
                return -1;
        }
        
        // Diagonal 1 sum equals row_sum
        ll diag_sum = 0;
        for(int i=0;i<m;i++){
            if(row == i && col == i)
                diag_sum += res;
            else
                diag_sum += matrix[i][i];
        }
        if(diag_sum != RowSum)
            return -1;
            
        // Check Diagonal 2 sum equals row_sum
        diag_sum = 0;
        for(int i=0;i<m;i++){
            if(row == m-1-i && col == i)
                diag_sum += res;
            else
                diag_sum += matrix[matrix.size()-1-i][i];
        }
        if(diag_sum != RowSum)
            return -1;
        return res;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
