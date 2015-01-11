#include "../../std_lib_facilities.h"

int main() {
  double x=0.0, y=0.0;
  while(cin >> x >> y) {
    cout << "x=" << x << ", y=" << y << "\n";
    if (x==y) {
      cout << "The numbers are equal.\n";
    } else {
      double larger=0.0, smaller=0.0;
      if (x<y) {
        larger=y;
        smaller=x;
      } else if (x>y) {
        larger=x;
        smaller=y;
      } 
      cout << "The larger value is: " << larger << "\n";
      cout << "The smaller value is: " << smaller << "\n";
      if (larger-smaller < 1.0/100) {
        cout << "The numbers are almost equal.\n";
      }
    }
  }
}
