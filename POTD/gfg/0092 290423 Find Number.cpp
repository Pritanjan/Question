// https://practice.geeksforgeeks.org/problems/35bff0ee40090b092e97b02f649085bf1390cc67/1


class Solution {
public:
    long findNumber(long N) {
        vector<int> arr = { 9, 1, 3, 5, 7 };
        long curr = 1, ans = 0;
        while (N != 0) {
            long index = N % 5;
            ans = arr[index] * curr + ans;
            if (N % 5 == 0) {
                N = N / 5 - 1;
            } else {
                N = N / 5;
            }
            curr *= 10;
        }
        return ans;
    }
};





class Solution{
public:
    long long findNumber(long long N){
        char a[5]={'1','3','5','7','9'};
		string s="";
		long long pre=1,mul=5,times=2;
		while(N>0){
			long long temp=(N % mul)-1;
			long long ind=(temp+mul)%mul;
			int index=ind/pre;
			s=a[index]+s;
			N-=mul;
			mul*=5;
			pre*=5;
		}
		return stoll(s);
    }
};
