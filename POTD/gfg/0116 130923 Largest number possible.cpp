// https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

class Solution{
public:
    string findLargest(int N, int S){
        if(N <= 0 || S < 0 || S > 9 * N) {
            return "-1"; // Invalid input, not possible.
        }

        string result(N, '0'); // Initialize the result with N zeros.
        if(S == 0) {
            if(N == 1) return "0";
            else return "-1"; // Leading zero not allowed for multi-digit numbers.
        }

        // Start from the leftmost digit (most significant) and move towards the right.
        int index = 0;
        while(S > 0 && index < N) {
            for(int digit=9; digit>=0; digit--) {
                // Try to make the leftmost digit as large as possible.
                if(digit <= S || (index == 0 && digit == 1)) {
                    result[index] = '0' + digit;
                    S -= digit;
                    index++;
                    break;
                }
            }
        }
        // Not enough digits to meet the sum 'S'.
        if(S > 0) return "-1"; 
        return result;
    }
};
