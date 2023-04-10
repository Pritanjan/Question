// https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1

class Solution {
public:
    int solve(int a, int b, int c) {
        int ans = a + b + c;
        if(a == b && b == c) {
            return ans;
        } else if(a > b && a > c) {
            if(a % 2 == 0) {
                if(b+c >= (a/2)-1) {
                    return ans;
                } else {
                    return -1;
                }
            } else {
                if(b+c >= a/2) {
                    return ans;
                } else {
                    return -1;
                }
            }
        } else if(b > c && b > a) {
            if(b % 2 == 0) {
                if(a+c >= (b/2)-1) {
                    return ans;
                } else {
                    return -1;
                }
            } else {
                if(a+c >= b/2) {
                    return ans;
                } else {
                    return -1;
                }
            }
        } else if(c > a && c > b) {
            if(c % 2 == 0) {
                if(b+a >= (c/2)-1) {
                    return ans;
                } else {
                    return -1;
                }
            } else {
                if(b+a >= c/2) {
                    return ans;
                } else {
                    return -1;
                }
            }
        } else {
            return ans;
        }
    }
};



class Solution {
public:
    int solve(int a, int b, int c) {
        int ans = a + b + c;
        if(a == b && b == c) return ans;
        if(a > b && a > c) return a % 2 == 0 ? (b+c >= (a/2)-1 ? ans : -1 ) : (b+c >= a/2 ? ans : -1);
        if(b > c && b > a) return b % 2 == 0 ? (a+c >= (b/2)-1 ? ans : -1 ) : (a+c >= b/2 ? ans : -1);
        if(c > a && c > b) return c % 2 == 0 ? (b+a >= (c/2)-1 ? ans : -1 ) : (b+a >= c/2 ? ans : -1);
        return ans;
    }
};






