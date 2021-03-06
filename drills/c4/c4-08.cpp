#include "../../std_lib_facilities.h"

int main() {
  double x=0.0;
  string unit="";
  double largest=0.0, smallest=0.0;
  bool first = 1;
  while(1) {
    cout << "Enter a number followed by a unit (cm, m, in, ft): ";
    if (!(cin >> x >> unit)) {
      cout << "Thanks!\n";
      return 1;
    }
    if (unit == "cm") {
      // noop, we will store as cm
    } else if (unit == "m") {
      x *= 100;
    } else if (unit == "in") {
      x *= 2.54;
    } else if (unit == "ft") {
      x *= 2.54*12;
    } else {
      cout << "You provided an invalid unit, " << unit << "\n";
      continue;
    }

    if (x<smallest || first==1) {
      smallest=x;
      cout << x << "cm is the smallest value yet.\n";
    }
    if (x>largest || first==1) {
      largest=x;
      cout << x << "cm is the largest value yet.\n";
    }

    first=0;
  }
}
