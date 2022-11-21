// https://www.codingninjas.com/codestudio/problems/sum-of-max-and-min_1081476?leftPanelTab=2

#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int mi = arr[0]; 
    int mx = arr[0];
    for(int i=0; i<n; i++){
        mi = min(mi, arr[i]);
        mx = max(mx, arr[i]);
    }
    
    return mx + mi;
}







