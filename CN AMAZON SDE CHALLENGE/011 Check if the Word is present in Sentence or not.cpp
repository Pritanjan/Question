// https://www.codingninjas.com/codestudio/problems/check-if-the-word-is-present-in-sentence-or-not_920440?topList=amazon-sde-challenge&leftPanelTab=0

bool findWord(string &s, string &w)
{
    string x = "";
	for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(x == w)
                return 1;
            else
                x = "";
        }
        else
            x += s[i];
         

    }
    if(x == w)
        return 1;
    return 0;
}


// APPROACH FROM SOLUTI0N BRUTE FORCE

bool findWord(string &s, string w){
   int n = s.size();
   for (int i = 0; i < n; i++) {
	 // To store the current word.
	 string temp = "";
	   
	 // Processing the string to find individual words.
	 while (i < n && s[i] != ' '){
		temp += s[i];
		i++;
	 }
	   
	 // Checking if the current word is equal to W or not.
	 if (temp == w){
	 	return true;
	 }
    }
    // If no word matches, then return false.
    return false;
}

//     Time Complexity: O(|S|)
//     Space Complexity: O(|S|)     where |S| is the length of the input sentence.


// APPROACH FROM SOLUTI0N String processing using libraries

#include <sstream>
bool findWord(string &s, string &w){
    // To store the current word.
    string temp;

    // Creating string stream
    stringstream ss(s);

    while (ss >> temp) {
         // Comparing the current word temp with W
	 if (temp == w) {
		return true;
         }
    }  
    return false;
}


//     Time Complexity: O(|S|)
//     Space Complexity: O(|S|)     where |S| is the length of the input sentence.
