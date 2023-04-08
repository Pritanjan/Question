// https://practice.geeksforgeeks.org/problems/badefd58bace4f2ca25267ccfe0c9dc844415e90/1


// APPROACH 1

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> res;
        for(auto &i: arr) {
            if(res.size() and ((res.back() < 0 and i >= 0) or (res.back() >= 0 and i < 0))) res.pop_back();
            else res.push_back(i);
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}







// APPROACH 2



class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> st;
        for(auto it : arr) {
            if(st.size() > 0) {
                if(st.top() >= 0 && it < 0) st.pop();
                else if(st.top() < 0 && it >= 0) st.pop();
                else st.push(it);
            }
            else st.push(it);
        }
        
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

