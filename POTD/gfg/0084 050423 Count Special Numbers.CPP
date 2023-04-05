// https://practice.geeksforgeeks.org/problems/3d49e4cce2820a813da02d1587c2dd9c542ce769/1

class Solution {
public:
    int countSpecialNumbers(int n, vector<int>& arr) {
        int m = *max_element(arr.begin(), arr.end());
        vector<int> res(m+1, 0);
        for (int a : arr) {
            if (res[a] <= 1) {
                for (int b = a; b <= m; b += a) {
                    res[b] += 1;
                }
            }
        }
        int count = 0;
        for (int a : arr) {
            if (res[a] > 1) {
                count++;
            }
        }
        return count;
    }
};





class Solution {
public:
    int countSpecialNumbers(int N, vector<int> arr) {
        int cnt = 0;
        unordered_map<int, int> mp;
        int maxx = INT_MIN;
        for(int i=0; i<N; i++) {
            maxx = max(maxx, arr[i]);
            mp[arr[i]]++;
        }
        
        for(int i=0; i<N; i++) {
            if(mp[arr[i]] > 1) {
                cnt++;
                continue;
            }
            
            for(int j=1; j<=arr[i]/2; j++) {
                if((arr[i] % j == 0) && mp[j] >= 1) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};





