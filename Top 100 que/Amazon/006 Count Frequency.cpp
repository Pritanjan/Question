// https://www.codingninjas.com/codestudio/problems/count-frequency_920323?topList=top-amazon-coding-interview-questions&leftPanelTab=0

#include <bits/stdc++.h> 
vector<int> findFrequency(string s) {
    // Creating a vector to store the frequency.
    vector<int> freq(26,0);
    for(int i=0; i<s.size(); i++){
        // Incrementing the frequency of current character.
        freq[s[i] - 'a']++;
    }
    return freq;
}



Time Complexity : O(N)
Space Complexity : O(1)
Where N is the size of string.



// Explanation
// Since there are just 26 lower case characters, we can use an array of size
// 26 to store the result.


// algorithm : 
// S1
// Create an array (say, ‘FREQ’), where 0-th index stores the frequency of ‘a’,
// 1st index stores the frequency of ‘b’ and so on. So the last index 
// i.e. 25th index stores the frequency of ‘z’.


// S2 
// Run a for loop from 0 to ‘N’ - 1 (say, iterator ‘i’), on the string 
// and do the following :
// (i) Update frequency of current character by updating ‘FREQ’[S[i] - ‘a’] 
// to ‘FREQ’[C - ‘a’] + 1. We are doing C - ‘a’, as it will give the 
// difference between ascii values of the characters and hence we can 
// increase the count. Example : Let C be ‘b’. Ascii value of ‘b’ is 98 
// and that of ‘a’ is 97. So the difference between them is 1, which gives
// us the index for character ‘b’.


// S3 
// Finally, return ‘FREQ’.









