

/*
  Mahika Bhan, 9/27/2024

  This is palindrome, a program in C++ that takes in user input and determines if it is the same message backwards and forwards.
  In this project, I utilized the cstring library (strcmp, strlen, strcopy) as well as functions like iswalnum and null terminating characters.
  Enjoy!
*/




#include <iostream>
#include <cstring>
#include <cwctype>

using namespace std;

int main(){


  //prompt user to enter a message
  cout << "Enter a message that is up to 80 characters and I will check if it is a palindrome.\nEnter your message here: \t" ;

  //declare a char array to hold the user input
  char input[80];

  //reading up to 80 characters of user input
  cin.get(input, 80);

  //discarding any remaining input
  cin.get();

  //getting the length of the input string
  int input_length = strlen(input);

  
  //creating a 'duplicate' of the char array to hold the cleaned up message
  char input_duplicate[input_length];

  
  
  //remove spaces & punctuation and convert to lowercase
  int index = 0;
  for (int i= 0; i < input_length; i++){
    input[i] = tolower(input[i]);


    if(iswalnum(input[i])){ //check for alphanumeric, source: https://www.geeksforgeeks.org/iswalnum-function-in-c-stl/
	input_duplicate[index] = input[i];
	index++;
    }
  }

  //null-terminating character to mark the end of the string 
  input_duplicate[index] = '\0';
  

  // for backwards

  //get the length of the input_duplicate array using stlen()
  int input_duplicate_length = strlen(input_duplicate);

  //create a new char array to hold the reversed string
  char input_reverse[input_duplicate_length];
  int count = 0;
  for (int i = (input_duplicate_length - 1); i>=0; i--){
    input_reverse[count] = input_duplicate[i]; //assigning characters in reverse order
    count++;
  }

//output the original message and the backwards message to the commandline  
cout << "Backwards: " << input_reverse << endl;
cout << "Original Message: " << input_duplicate << endl;

  /* Test Case For Prior Error In Code
  cout << input_length << endl;
  cout << strlen(input_reverse) << endl;
  */

//use strcmp to check if the original input and the reversed input are the same

//if strcmp returns 0, the two strings are the same
  if (strcmp(input_duplicate, input_reverse) == 0) {
    cout << "This message is a palindrome!" << endl; //inform the user that the word is a palindrome in the command line
  }else { //if strcmp does not return 0
    cout << "This message is NOT a palindrome!" << endl; //inform the user that the word is not a palindrome in the command line
  }

  return 0;

}

/*   /\__/\
    (  o.o )
     > ^ <

   M E O W  



*/  
