// https://www.codingninjas.com/codestudio/problems/row-of-a-matrix-with-maximum-ones_982768?topList=amazon-sde-challenge&leftPanelTab=0

// https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/

#include <bits/stdc++.h> 
int maximumOnesRow(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    int ma = 0;
    int row = -1;
    
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 1)
                cnt++;
        }
        if(cnt > ma){
            ma = cnt;
            row = i;
        }            
    }
    return row;    
}



