// https://workat.tech/problem-solving/practice/words-in-sentence
// https://www.educative.io/answers/how-to-find-the-number-of-words-in-a-sentence-in-cpp


#include <iostream>
using namespace std;

int main() {
  // declaring string
  string sentence;
  cin >> sentence;
  
  // initialising no of words to 0
  int words = 0;
  
  // run for loop from i = 0 to i = lenOfSentence to iterate through each character of the string
  for(int i=0; i<sentence.size(); i++) {
      // check if current character is a space
      if(sentence[i] == ' ') {
          // if it is a space, increment word count
          words++;
      }
  }
  
  // at the end of the for loop, no. of spaces have been counted. Increment word count one more time to get no. of words
  words = words + 1;

  cout << "No. of words = " << words << endl;

}
