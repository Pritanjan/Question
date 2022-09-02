// https://www.codingninjas.com/codestudio/problems/minimum-value_975388?topList=amazon-sde-challenge&leftPanelTab=0
// Company Tag - Amazon

#include<bits/stdc++.h>
int minValue(vector<int>&arr, int n, int k)
{
    // Write your code here.
    int diff,ans=INT_MAX;
    sort(arr.begin(),arr.end());
    int L=0,R=k-1;
    while(R < n){
        diff=arr[R]-arr[L];
        if(diff<ans){
            ans=diff;
        }
        L++,
        R++;
    }
    return ans;
}


