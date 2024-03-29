// https://practice.geeksforgeeks.org/problems/d4aeef538e6dd3280dda5f8ed7964727fdc7075f/1

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        vector<int> ans(n,0);
        for(int i=1; i<n; i++) {
            int x = abs(a[i] - a[i/2]);
            ans[i] = ans[i-1] + x;
        }
        return ans;
    }
};



class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        vector<int>ans;

        ans.push_back(0);

        for(int i=1;i<n;i++)

        {

            int mid1=i/2,mid2=(i+1)/2;

            int val1;

            val1=(ans.back()+a[i]-a[mid1]);

            int val2;

            val2=a[mid2]-a[mid1];

            val2=(i*val2)+a[i]-a[mid2]+ans.back();

            ans.push_back(min(val1,val2));

            

        }

        return ans;
    }
};

