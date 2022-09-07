// https://leetcode.com/problems/single-element-in-a-sorted-array/
// https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654?topList=amazon-sde-challenge&leftPanelTab=0


// Hint
// Use the fact that the array is sorted and for each element of the array, check if it is Shizuka’s lucky number.
// Think of a solution using hashMap.
// Think of a solution using bit manipulation.
// Think of a solution using Binary search.

    
class Solution {
public:
    int uniqueElement(vector<int> A, int n){
        int x = 0;
        for(int i=0; i<n; i+=2){
            if(A[i] != A[i+1]){
                x = A[i];
                break;
            }
        }
        return x;
    }
    
    int singleNonDuplicate(vector<int>& A) {
         return uniqueElement(A, A.size());
    }
};





