#include "../../std_lib_facilities.h"
int main() {
  cout << "Please enter your first name and age.\n";
  string first_name = "???";
  double age_years = -1.0;
  int age_months = -1;
  cin >> first_name >> age_years;
  age_months = age_years * 12;
  cout << "Hello, " << first_name << " (age " << age_months << " months)\n";
}
