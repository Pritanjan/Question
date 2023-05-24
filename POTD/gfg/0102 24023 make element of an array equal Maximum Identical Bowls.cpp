// https://practice.geeksforgeeks.org/problems/5bfe93cc7f5a214bc6342709c78bc3dceba0f1c1/1

class Solution {
public:
    int getMaximum(int n, vector<int> &arr) {
        long long int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        
        while(sum % n != 0) n--;
        return n;
    }
};




