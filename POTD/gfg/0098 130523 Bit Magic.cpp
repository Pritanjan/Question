// https://practice.geeksforgeeks.org/problems/ed0422e992899f3f46340ce97b0090683ceebd67/1


class Solution {
public:
    int bitMagic(int n, vector<int> &arr) {
        int cnt = 0;
        int i = 0;
        int j = n - 1;
        while(i < j) {
            if(arr[i] != arr[j]) cnt++;
            
            i++;
            j--;
        }
        return (cnt+1)/2;
    }
};
