#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter three words.\n";
  string str1 = "", str2 = "", str3 = "";
  cin >> str1 >> str2 >> str3;

  if (str1 < str2 && str1 < str3) {
    cout << str1 << ",";
    if (str2 < str3) {
      cout << str2 << "," << str3;
    } else {
      cout << str3 << "," << str2;
    }
  } else if (str2 < str1 && str2 < str3) {
    cout << str2 << ",";
    if (str1 < str3) {
      cout << str1 << "," << str3;
    } else {
      cout << str3 << "," << str1;
    }
  } else {
    cout << str3 << ",";
    if (str1 < str2) {
      cout << str1 << "," << str2;
    } else {
      cout << str2 << "," << str1;
    }
  }
  cout << "\n";  

}
