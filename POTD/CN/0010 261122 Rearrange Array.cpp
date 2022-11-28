// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

#include <bits/stdc++.h> 
void rearrangeArray(int arr[], int n) {
//     vector<int> v;
//     int v[n];
	for(int i=0; i<n; i++){
        arr[i] += (arr[arr[i]] % n) * n;
    }
    
    for (int i = 0; i < n; i++)
        arr[i] /= n;
    
    return ;
}





