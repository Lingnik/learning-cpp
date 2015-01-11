#include "std_lib_facilities.h"

int main() {
  int i = 97;
  while (i <= 122) {
    cout << i << "\t" << char(i) << "\n";  
    ++i;
  }
}
