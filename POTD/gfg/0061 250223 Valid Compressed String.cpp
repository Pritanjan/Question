// https://practice.geeksforgeeks.org/problems/13eb74f1c80bc67d526a69b8276f6cad1b8c3401/1

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i = 0, j = 0, sum = 0;
        while(j < T.length()){
            if(isalpha(T[j])){
               i += sum;
               sum = 0;
               if(i < S.length() && S[i] == T[j]) {
                   i++;
                   j++;
               }
               else
                return 0;
            }
            else{
                sum = sum * 10 + (T[j]-'0');
                j++;
            }
        }
        i += sum;
        if(i == S.length())
            return 1;
        return 0;
    }
};

