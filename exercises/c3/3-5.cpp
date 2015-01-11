#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter two floating-point numbers.\n";
  double dbl1 = 0, dbl2 = 0;
  cin >> dbl1 >> dbl2;
  if (dbl1 == dbl2) {
    cout << "These numbers, " << dbl1 << " and " << dbl2 << " are identical.\n";
  } else if (dbl1 < dbl2) {
    cout << dbl1 << " is less than " << dbl2 << ".\n";
  } else if (dbl1 > dbl2) {
    cout << dbl2 << " is less than " << dbl1 << ".\n";
  }

  cout << dbl1 << " plus " << dbl2 << " equals " << (dbl1+dbl2) << ".\n";
  cout << dbl1 << " minus " << dbl2 << " equals " << (dbl1-dbl2) << ".\n";
  cout << "The product of " << dbl1 << " and " << dbl2 << " is " << (dbl1*dbl2) << ".\n";
  double ratio = dbl1/dbl2;
  cout << "The ratio of " << dbl1 << " to " << dbl2 << " is " << ratio << ".\n";
}
