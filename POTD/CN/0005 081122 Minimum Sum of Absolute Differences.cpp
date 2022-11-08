// https://www.codingninjas.com/codestudio/problem-of-the-day/easy?leftPanelTab=0

#include <bits/stdc++.h> 
int minimumSum(vector<int>& arr1, vector<int>& arr2, int n)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    
    int sum = 0;
    int j = 0;
    for(int i=0; i<n; i++){
        sum += abs(arr2[i] - arr1[i]);
    }
    
    return sum;
}

// 4  5 10 24 90
// 2  5  6 14 32
    
// 2 4  10 58
