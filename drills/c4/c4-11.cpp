#include "../../std_lib_facilities.h"

int main() {
  double x=0.0;
  string unit="";
  double largest=0.0, smallest=0.0;
  vector<double> values;
  int value_count = 0;
  double value_sum = 0;
  bool first = 1;
  while(1) {
    cout << "Enter a number followed by a unit (cm, m, in, ft): ";
    if (!(cin >> x >> unit)) {
      cout << "Thanks!\n";
      cout << "Smallest was: " << smallest << "m\n";
      cout << "Largest was:  " << largest << "m\n";
      cout << "Count: " << value_count << "\n";
      cout << "Sum: " << value_sum << "m\n";
      cout << "Values entered:\n";
      sort(values);
      for (double y:values) cout << " " << y << "\n";
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

    x /= 100.0;

    ++value_count;
    values.push_back(x);
    value_sum += x;

    if (x<smallest || first==1) {
      smallest=x;
      cout << x << "m is the smallest value yet.\n";
    }
    if (x>largest || first==1) {
      largest=x;
      cout << x << "m is the largest value yet.\n";
    }

    first=0;
  }
}
