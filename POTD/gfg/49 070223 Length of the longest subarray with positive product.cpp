// https://practice.geeksforgeeks.org/problems/4dfa8ba14d4c94f4d7637b6b5246782412f3aeb8/1
// https://www.geeksforgeeks.org/length-of-longest-subarray-with-positive-product/
// https://www.geeksforgeeks.org/length-of-maximum-product-subarray/

class Solution {
public:
    // Function to return the length of the
    //longest subarray with ppositive product
    int maxLength(vector<int> &arr,int N){
        int Pos = 0, Neg = 0, res = 0;
        for (int i=0; i<N; i++){
            if(arr[i] == 0) {
                Pos = Neg = 0;
            }
            else if(arr[i] > 0){
                Pos += 1;
                if (Neg != 0) {
                    Neg += 1;
                }
                res = max(res, Pos);
            }
            else{
                swap(Pos, Neg);
                Neg += 1;
                if(Pos != 0) {
                    Pos += 1;
                }
                res = max(res, Pos);
            }
        }
        return res;
    }
};

// Time Complexity: O(N)
// Auxiliary Space: O(1)




