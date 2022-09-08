//https://www.codingninjas.com/codestudio/problems/row-with-maximum-1-s_1112656?topList=amazon-sde-challenge&leftPanelTab=0

#include<bits/stdc++.h>
int rowMaxOnes(vector<vector<int>>& mat, int n, int m) {
    int ma = INT_MIN;
    int ans = -1;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<m ;j++){
            if(mat[i][j] == 1)
                cnt++;
            if(cnt > ma){
                ma = cnt;
                ans = i;
            }
        }
    }
    return ans;
}

