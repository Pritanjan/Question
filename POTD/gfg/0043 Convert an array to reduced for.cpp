// https://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form1101/1

void convert(int arr[], int n) {
	    map<int,int> mp;
	    for(int i=0; i<n; i++){
	         mp[arr[i]] = i;
	    }
	    
        int i= 0;
        for(auto it:mp){
            arr[it.second] = i++;
        }
	}
};


class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    vector<pair<int,int>>a;
	    for(int i=0; i<n; i++){
	        a.push_back({arr[i],i});
	    }
	    sort(a.begin(),a.end());
	    for(int i=0; i<n; i++){
	        arr[a[i].second]=i;
	    }
	}

};
