// https://practice.geeksforgeeks.org/problems/1132bd8ee92072cd31441858402641d6800fa6b3/1

class Solution {
public:
    long long countBits(long long N) {
        long long int ans = 0;
        for(long long int i=1; i<=N; i++){
            ans += __builtin_popcountll(i);
        }
        return ans;
    }
};


class Solution{
public:
     long long countBits(long long N) {
         long long count = 0;
         for (int i = 0; i < 31; i++) {
            int x = 1 << i; // calculate the ith bit
            long long y = (N + 1) / (x * 2) * x; // count the number of set bits up to the ith bit
            long long z = (N + 1) % (x * 2) - x; // count the number of set bits in the ith bit
            count += y + std::max(z, 0LL); // add the counts to the total
        }
        return count;
    }
};




