// https://practice.geeksforgeeks.org/problems/77e1c3e12cd148f835d53eb168d4472b2ff539fa/1


class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        int cnt = 0;
        int row = 0;
        
        for(int i=0; i<N; i++){
            vector<int>::iterator upper;
            upper = upper_bound(mat[i].begin(), mat[i].end(), 0) ;
            int temp =  N - (upper - mat[i].begin());
             
            if(temp > cnt){
                cnt = temp;
                row = i;
            }
        }
        
        return {row , cnt}; 
    }
};








class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        int i = 0;
        int j = N - 1;
        int ans=0;
        
        while(i < N && j >= 0) {
            if(mat[i][j] == 1) {
                ans=i;
                j--;
            }
            else i++;
        }
        
        return {ans,N-j-1};
    }
};

