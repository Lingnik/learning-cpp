#include "../../std_lib_facilities.h"

int main() {
  int x=0, y=0;
  while(cin >> x >> y) {
    cout << "x=" << x << ", y=" << y << "\n";
    if (x<y) {
      cout << "The larger value is: " << y << "\n";
      cout << "The smaller value is: " << x << "\n";
    } else if (x>y) {
      cout << "The larger value is: " << x << "\n";
      cout << "The smaller value is: " << y << "\n";
    } else if (x==y) {
      cout << "The numbers are equal.\n";
    }
  }
}
