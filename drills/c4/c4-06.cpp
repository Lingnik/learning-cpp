#include "../../std_lib_facilities.h"

int main() {
  double x=0.0;
  double largest=0.0, smallest=0.0;
  bool first = 1;
  cout << "Enter a number: ";
  while(cin >> x) {
    if (x<smallest || first==1) {
      smallest=x;
      cout << x << " is the smallest number yet.\n";
    }
    if (x>largest || first==1) {
      largest=x;
      cout << x << " is the largest number yet.\n";
    }
    first=0;

    cout << "Enter a number: ";
  }
}
