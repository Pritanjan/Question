#include <bits/stdc++.h> 
int missingNumber(vector<int> &arr, int n) {  
    int d = (arr[n-1] - arr[0])/n;
    int ans = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i+1] - arr[i] != d)
            return arr[i] + d;
    }    
    return -1;
}





