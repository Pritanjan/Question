// https://workat.tech/problem-solving/practice/words-in-sentence
// https://www.educative.io/answers/how-to-find-the-number-of-words-in-a-sentence-in-cpp

// https://www.geeksforgeeks.org/count-words-in-a-given-string/

/* C++ program to count no of words from given input string. */


#include <iostream>
using namespace std;

int main() {
  
  // declaring string
  string sentence = "Mary had a little lamb";
  // initialising no of words to 0
  int words = 0;
  // store length of string in lenOfSentence
  int lenOfSentence = sentence.size();

  // run for loop from i = 0 to i = lenOfSentence
  // to iterate through each character of the string
  for(int i = 0; i < lenOfSentence; i++)
  {
    // check if current character is a space
    if(sentence[i] == ' ')
    {
      // if it is a space, increment word count
      words++;
    }

  }
  // at the end of the for loop, no. of spaces have been
  // counted. Increment word count one more time to get
  // no. of words
  words = words + 1;

  cout << "No. of words = " << words << endl;

}


// APPROACH 2
// The idea is to maintain two states: IN and OUT. 
// The state OUT indicates that a separator is seen.
// The State IN indicates  that a word character is seen. 
// We increment word count when previous state is OUT and
// next character is a word character. 


#include <bits/stdc++.h>
using namespace std;
#define OUT 0
#define IN 1

// returns number of words in str
unsigned countWords(string str) {
  state = OUT;
	unsigned wc = 0; // word count

	// Scan all characters one by one
	while (*str) {
		// If next character is a separator, set the state as OUT
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		// If next character is not a word separator and state is OUT,
		// then set the state as IN and increment word count
		else if (state == OUT) {
			state = IN;
			++wc;
		}

		// Move to next character
		++str;
	}
	
	return wc;
}

// Driver code
int main(void) {
    char str[] = "One two     three\n four\tfive ";
    cout<<"No of words : "<<countWords(str);
    return 0;
}

Output
No of words : 5

Time complexity: O(n)
Auxiliary Space: O(1)
  

// APPROACH 3

// Get the string to count the total number of words.
// Check if the string is empty or null then return 0.
// Converting the given string into a character array.
// Check if the character is a letter and index of the character array doesn’t equal to the end of the line that means, it is a word and set isWord by true.
// Check if the character is not a letter that means there is a space, then we increment the wordCount by one and set the isWord by false.
// Check for the last word of the sentence and increment the wordCount by one.
// Now, print the result.

#include <bits/stdc++.h>
using namespace std;

// Function to count total number of words in the string
int countWords(char* str, int n) {
	  // Check if the string is null or empty then return zero
	  if (n == 0)	return 0;
	  int wordCount = 0;
	  bool isWord = false;
	  int endOfLine = n - 1;

	  for (int i = 0; i < n; i++) {
	    	// Check if the character is a letter and index of character array doesn't
		    // equal to end of line that means, it is a word and set isWord by true
		    if (isalpha(str[i]) && i != endOfLine) {
		        isWord = true;
		    }

		    // Check if the character is not a letter that means there is a space, then we
		    // increment the wordCount by one and set the isWord by false
		    else if (!isalpha(str[i]) && isWord) {
			       wordCount++;
			       isWord = false;
		    }

		    // Check for the last word of the sentence and 
		    // increment the wordCount by one
		    else if (isalpha(str[i]) && i == endOfLine) 
			       wordCount++;
	  } 

	      // Return the total number of words in the string
	      return wordCount;
}

// Driver code
int main() {
  	    char str[] = "One two	 three\n four\tfive ";
	      int n = (sizeof(str) / sizeof(char)) - 1;
	      cout << "No of words : " << countWords(str, n);
	      return 0;
}



Output
No of words : 5
Time Complexity: O(N)
Auxiliary Space: O(1)
