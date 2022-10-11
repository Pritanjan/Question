// https://www.codingninjas.com/codestudio/problems/first-negative-in-every-window_759333?topList=top-amazon-coding-interview-questions&leftPanelTab=0

vector<int> firstNegative(vector<int> arr, int n, int k) {
    vector<int> v;
    int i = 0;
    int j = k-1;
    while(j<n) {
        
        while(arr[i] >= 0 and i < j)
            i++;
        if(arr[i] <= 0)
            v.push_back(arr[i]);
        else
            v.push_back(0);
        if(j-i+1 == k)
            i++;
        j++;
    }
    return v;
}


