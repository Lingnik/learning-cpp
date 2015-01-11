#include "../../std_lib_facilities.h"

int main() {
  cout << "Enter a floating point number of miles:\n";
  double miles = -1;
  cin >> miles;
  double km = miles * 1.609;
  cout << miles << " miles==" << km << " km\n";
}
