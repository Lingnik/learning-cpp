#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter a number.\n";
  string input = "";
  cin >> input;
  int number = -1;
  if (input == "zero") {
    number = 0;
  } else if (input == "one") {
    number = 1;
  } else if (input == "two") {
    number = 2;
  } else if (input == "three") {
    number = 3;
  } else if (input == "four") {
    number = 4;
  }
  if (number == -1) {
    cout << "you broke the computer by entering '" << input << "'.\n";
  } else {
    cout << "The number you entered was " << input << ".\n";
  } 
}
