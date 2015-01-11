// Do || and && terminate the conditional tests on the left test's failure?

#include "std_lib_facilities.h"
int main() {
  string a = "yup\n";
  if (1 == 1 || cin >> a) { }
  cout << a;

  a = "still yup\n";
  if (1 == 0 && cin >> a) { }
  cout << a;
}
