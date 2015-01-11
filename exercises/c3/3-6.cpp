#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter three integers.\n";
  int int1 = 0, int2 = 0, int3 = 0;
  cin >> int1 >> int2 >> int3;

  if (int1 < int2 && int1 < int3) {
    cout << int1 << ",";
    if (int2 < int3) {
      cout << int2 << "," << int3;
    } else {
      cout << int3 << "," << int2;
    }
  } else if (int2 < int1 && int2 < int3) {
    cout << int2 << ",";
    if (int1 < int3) {
      cout << int1 << "," << int3;
    } else {
      cout << int3 << "," << int1;
    }
  } else {
    cout << int3 << ",";
    if (int1 < int2) {
      cout << int1 << "," << int2;
    } else {
      cout << int2 << "," << int1;
    }
  }
  cout << "\n";  

}
