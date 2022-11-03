#include <bits/stdc++.h> 
int specialSum(vector<int>& arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    
    
    int ans = 0;
    while(sum > 9){
        int a = sum / 10;
        int b = sum % 10;
        sum = a + b;
        }
//         sum = ans;
        
    return sum;
}
