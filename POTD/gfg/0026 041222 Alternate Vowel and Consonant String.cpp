//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            return true;
        }
        return false;
    }
    char getVowel(vector<int>& arr){
        for(int i=0;i<26;i++){
            if(isVowel((char)(i+'a')) && arr[i] ){
                arr[i]--;
                return (char)(i+'a');
            }
        }
        return '0';
    }
    char getConsonants(vector<int>& arr){
        for(int i=0;i<26;i++){
            if(!isVowel((char)(i+'a')) && arr[i] ){
                arr[i]--;
                return (char)(i+'a');
            }
        }
        return '0';
    }
    
    string rearrange (string S, int N){
        //Freq arrays
        vector<int> arr(26,0);
        
        //Count every consonant and vowel in the string
        int cntc = 0, cntv = 0;
        
        //Marking counts in the frequency array
        for(int i=0;i<N;i++){
            arr[S[i]-'a']++;
            if(isVowel(S[i])) 
				cntv++;
            else
				cntc++;
        }
        
        //Take a new string as ans
        string ans = "";
        
        //loop till  ans size and given string size becomes same
        while(ans.size()!=N){
            //Now place alternate consonants and vowels in this string
            //if the current size of ans is even
            if(ans.size()%2 ==0){
                //if vowels are more than consonants start placing them at odd positions
                if(cntv>=cntc){
                    char ch = getVowel(arr);
                    if(ch=='0') return "-1";
                    ans += ch;
                }
                //if consonant are more than start placin them at odd positions
                else{
                    char ch = getConsonants(arr);
                    if(ch=='0') return "-1";
                    ans += ch;
                }
            }
             //if the current size of ans is odd
            else{
                //if the vowels are more than consonants then plcace consonant
                if(cntv >= cntc){
                    char ch = getConsonants(arr); 
                    if(ch=='0') return "-1";
                    ans+=ch;
                }
                //if the consonants are more than vowels then plcace vowels 
                else{
                    char ch = getVowel(arr);
                    if(ch=='0') return "-1";
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends




