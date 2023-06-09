// https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1

class Solution {
public:
    void Rearrange(int arr[], int n) {
        int j = 0;
        int v[n];
        for(int i=0; i<n; i++) {
            if(arr[i] < 0 ) v[j++] = arr[i];
        } 
        
        for(int i=0; i<n; i++) {
            if(arr[i] >= 0 ) v[j++] = arr[i];
        } 
        
        for(int i=0; i<n; i++) arr[i] = v[i];
    }
};


