// https://practice.geeksforgeeks.org/problems/5877fde1c8e1029658845cd4bc94066ac1d4b09b/1


// TLE

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long> ans;
        
        for(int i=0; i<n; i++){
            int sum = 0;
            for(int j=0; j<n; j++){
                if(arr[j]<arr[i]) sum += arr[j];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};





class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<long long>a(arr.begin(),arr.end());
        sort(a.begin(),a.end());
        unordered_map<long long,long long>mp;
        vector<long long>pre(n,0),ans(n,0);
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=a[i]+pre[i-1];
        }
        for(int i=0;i<n;i++){
            if(i==0) mp[a[i]]=0;
            else if(!mp.count(a[i])) mp[a[i]]=pre[i-1];
        }
        for(int i=0;i<n;i++)
          ans[i]=mp[arr[i]];
        return ans;
    }
};




