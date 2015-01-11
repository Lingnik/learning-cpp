#import "../../std_lib_facilities.h"

int main() {
  cout << "Please enter an integer to test whether it is even or odd:\n";
  int input = 0;
  cin >> input;
  if (input % 2 == 0) {
    cout << "The number " << input << " is even.\n";
  } else {
    cout << "The number " << input << " is odd.\n";
  }
}
