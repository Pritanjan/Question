// https://practice.geeksforgeeks.org/problems/even-swap/1

// APPROACH 1

class Solution
{
public:
    void reverse(vector<int>& a, int strt, int end) {
        for(int i=strt, j=end; i<j; i++, j--) {
            swap(a[i], a[j]);
        }
    }

    vector<int> lexicographicallyLargest(vector<int> arr, int n) {
        int previousIndex = 0;
        for(int i=0; i<n; i++) {
            if(arr[i]%2 != arr[previousIndex]%2) {
                sort(arr.begin()+previousIndex, arr.begin()+i);
                reverse(arr, previousIndex, i-1);
                previousIndex = i;
            }
        }
        sort(arr.begin()+previousIndex, arr.end());
        reverse(arr, previousIndex, n-1);
        return arr;
    }
};




// APPROACH 2

class Solution {
public:
    vector <int> lexicographicallyLargest(vector <int> &a,int n) {
        for(int i=0; i<n; i){
            int j = i;
            while(i < n and a[i] % 2) i++;
            
            sort(a.begin()+j,a.begin()+i,greater<>());
            j=i;
            while(i<n and a[i]%2==0)i++;
            sort(a.begin()+j,a.begin()+i, greater<>());
        }
        return a;
    }
};





// APPROACH 3

class Solution {
public:
    vector<int> lexicographicallyLargest(vector<int> &a, int n) {
        for(int i = 0; i < n;) {
            int rem = a[i]&1, j = i;
            while(j < n && a[j]%2 == rem) j++;
            sort(a.begin() + i, a.begin() + j, greater<int>());
            i = j;
        }
        return a;
    }
};



