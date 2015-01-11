#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter two integers.\n";
  int int1 = 0, int2 = 0;
  cin >> int1 >> int2;
  if (int1 == int2) {
    cout << "These numbers, " << int1 << " and " << int2 << " are identical.\n";
  } else if (int1 < int2) {
    cout << int1 << " is less than " << int2 << ".\n";
  } else if (int1 > int2) {
    cout << int2 << " is less than " << int1 << ".\n";
  }

  cout << int1 << " plus " << int2 << " equals " << (int1+int2) << ".\n";
  cout << int1 << " minus " << int2 << " equals " << (int1-int2) << ".\n";
  cout << "The product of " << int1 << " and " << int2 << " is " << (int1*int2) << ".\n";
  double dbl1 = int1;
  double dbl2 = int2;
  double ratio = dbl1/dbl2;
  cout << "The ratio of " << int1 << " to " << int2 << " is " << ratio << ".\n";
}
