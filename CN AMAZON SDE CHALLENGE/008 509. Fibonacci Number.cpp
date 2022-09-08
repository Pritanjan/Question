// https://leetcode.com/problems/fibonacci-number/
// https://leetcode.com/problems/fibonacci-number/discuss/2243893/6-c-3-solution-easy-solution-6
// https://www.codingninjas.com/codestudio/problems/fibonacci-number_1232655?topList=amazon-sde-challenge&leftPanelTab=0


// CN
bool CheckFiboNum(int n)
{
    if(n == 0 or n == 1){
        return true;
    }
    
    int a = 0;
    int b = 1;
    
    for(int i=0; i<=n ; i++){
        int c = a + b;
        a = b;
        b = c;
        
        if(c == n)
            return true;
    }
    return false;
}


// LC

class Solution {
public:
    int fib(int n) {
        int F[n+1];
        if(n==0)
            return 0;
        F[0] = 0;
        F[1] = 1;
        
        for(int i=2; i<=n; i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[n];
    }
};


class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else{
            return fib(n-1) + fib(n-2);
        }
        // return fib(n)
    }
};


class Solution {
public:
    int fib(int n) {
        int i, a = 0, b = 1, c = i;
        if(n==0)
            return 0;
        
        for(i=2; i<=n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};
