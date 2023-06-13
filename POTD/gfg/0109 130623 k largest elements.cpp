// https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr, arr+n);
	    reverse(arr, arr+n);
	    
	    vector<int> v;
	    for(int i=0; i<k; i++){
	        v.push_back(arr[i]);
	    }
	    return v;
	}
};




class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i=0; i<n; i++) {
	        if(pq.size() == k) {
	            if(pq.top() < arr[i]) {
	                pq.pop();
	                pq.push(arr[i]);
	            }
	        }
          else pq.push(arr[i]);
	    }
    
	    vector<int> ans;
	    while(!pq.empty()) {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    reverse(ans.begin(), ans.end());
	    return ans;
	}
};



