// https://practice.geeksforgeeks.org/problems/add-binary-strings3805/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B) {
	    if(A.size() > B.size())
	        return addBinary(B, A);
	        
	    int size = B.size() - A.size();
	    
	    string s;
	    for(int i=0; i<size; i++){
	        s.push_back('0');
	    }
	    
	    A = s + A;
	    string ans;
	    char carry = '0';
	    
	    for(int i=A.size()-1; i>=0; i--){
	        if(A[i] == '0' and B[i] == '0'){
	            if(carry == '1'){
	                ans.push_back('1');
	                carry = '0';
	            }
	            else{
	                ans.push_back('0');
	                carry = '0';
	            }
	        }
	        else if(A[i] == '1' and B[i] == '1'){
	            if(carry == '1'){
	                ans.push_back('1');
	                carry = '1';
	            }
	            else{
	                ans.push_back('0');
	                carry = '1';
	            }
	        }
	        else if(A[i] != B[i]){
	            if(carry == '1'){
	                ans.push_back('0');
	                carry = '1';
	            }
	            else{
	                ans.push_back('1');
	                carry = '0';
	            }
	        }

	    }
        	        
	   if(carry == '1')
            ans.push_back(carry);
	            
	   reverse(ans.begin(), ans.end());
	   int idx = 0;
	       
	   while(idx + 1 < ans.size() and ans[idx] == '0'){
	       idx++;
	   }
	   
	   return (ans.substr(idx));
	}
};


//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}



// Time Complexity: O(max(L1, L2)), where L1 and L2 are the lengths of strings a and b respectively. 
// Auxiliary Space: O(max(L1, L2)), where L1 and L2 are the lengths of strings a and b respectively. 







