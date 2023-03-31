// https://practice.geeksforgeeks.org/problems/even-swap/1

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





