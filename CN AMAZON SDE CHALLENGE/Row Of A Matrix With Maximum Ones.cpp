
// TLE

int ninjaAndLadoos(vector<int> &r1, vector<int> &r2, int m, int n, int k) {
    vector<int> ans;
    
    for(int i=0; i<m; i++){
        ans.push_back(r1[i]);
    }
    
    for(int i=0; i<n; i++){
        ans.push_back(r2[i]);
    }
    
    sort(ans.begin(), ans.end());
    return ans[k-1];
}




