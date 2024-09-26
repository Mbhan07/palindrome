#include <iostream>
#include <cstring>
#include <cwctype>

using namespace std;

int main(){

  cout << "Enter a message that is up to 80 characters and I will check if it is a palindrome.\nEnter your message here: \t" ;
  char input[80];
  cin.get(input, 80);
  cin.get();

  int input_length = strlen(input);
  
  char input_duplicate[input_length];
  
  //remove spaces & punctuation
  int index = 0;
  for (int i= 0; i < input_length; i++){
    input[i] = tolower(input[i]);


    if(iswalnum(input[i])){
	input_duplicate[index] = input[i];
	index++;
    }
  }
  //https://www.geeksforgeeks.org/iswalnum-function-in-c-stl/

  char new_input[index];

  for (int j = 0; j < index; j++){
    new_input[j] = input_duplicate[j];
  }


  // for backwards

  int input_duplicate_length = strlen(input_duplicate);
  char input_reverse[input_duplicate_length];
  int count = 0;
  for (int i = (input_duplicate_length - 1); i>=0; i--){
    input_reverse[count] = input_duplicate[i];
    count++;
  }

  
cout << "Backwards: " << input_reverse << endl;
  cout << "Original Message: " << input_duplicate << endl;
  cout << input_length << endl;
  cout << strlen(input_reverse) << endl;
  if (strcmp(input_duplicate, input_reverse) == 0) {
    cout << "This message is a palindrome!" << endl;
  }else {
    cout << "This message is NOT a palindrome!" << endl;
  }

  return 0;

}
