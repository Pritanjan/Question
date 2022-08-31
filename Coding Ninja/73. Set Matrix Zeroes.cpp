// https://leetcode.com/problems/set-matrix-zeroes/discuss/2508791/C%2B%2B-Solution-with-explanation
// https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=amazon-sde-challenge&leftPanelTab=0

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        // vector<int> v1,v2;
        set<int> r;
        set<int> c;
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j] == 0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(r.count(i) or c.count(j))
                    matrix[i][j] = 0;
            }
        }
        // return matrix;
    }
};