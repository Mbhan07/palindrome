#include <iostream>
#include <cstring>

using namespace std;


//geeksforgeeks https://www.geeksforgeeks.org/removing-punctuations-given-string/ 

int main(){
  char str[80]; //type of array and space (5 chars)
  cin.get(str, 20);
  cout << str << endl;

  
  cout << removePunctuations(str);
  

  // A NULL CHARACTER IS A \0

  //read in a series of characters
  //remove all spaces and punctuation

  //check if input is the same backwards as is forwards

  // if true, print palindrome

  //if not true, print not a palindrome

  return 0;


}

string removePunctuations(string palindrome){
  string result = "";
  for (char c : palindrome) {
    if (!ispunct(c)){
      result += c;
    }
  }
  palindrome = result;
  return palindrome;
}

bool isPalindrome(string palindrome){

  return false;
}
