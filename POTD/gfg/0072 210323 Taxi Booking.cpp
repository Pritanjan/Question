// https://practice.geeksforgeeks.org/problems/7995e41d167d81f14f1d4194b29ef839f52d18ba/1

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int mini = 1e9;
        for(int i=0; i<N; i++) {
            int curr = abs(pos[i] - cur) * time[i];
            mini = min(mini, curr);
        }
        return mini;
    }
};


