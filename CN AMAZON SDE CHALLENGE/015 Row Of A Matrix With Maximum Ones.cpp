
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



// TLE



int ninjaAndLadoos(vector<int> &arr1, vector<int> &arr2, int m, int n, int k){
    int ans[m + n];
    int i = 0, j = 0, d = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            ans[d++] = arr1[i++];
        else
            ans[d++] = arr2[j++];
    }
    while (i < m)
        ans[d++] = arr1[i++];
    while (j < n)
        ans[d++] = arr2[j++];
    return ans[k - 1];
}


