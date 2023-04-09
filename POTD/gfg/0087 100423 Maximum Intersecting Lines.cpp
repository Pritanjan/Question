// https://practice.geeksforgeeks.org/problems/63c232252d445a377e01cd91adfd7d1060580038/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        map<int, int> m;
        for(auto i : lines) m[i[0]]++, m[i[1] + 1]--;
        int ans = 0, s = 0;
        for(auto i : m) {
            s += i.second;
            ans = max(ans, s);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}





