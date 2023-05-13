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





class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        int cn=0;
        for(int i=0;i<n/2;i++){
            if(arr[i]!=arr[n-1-i]) cn++;
        }
        return (cn+1)/2;
    }
};


