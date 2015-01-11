#include "std_lib_facilities.h"

int main()
{
  vector<string> bleep;
  bleep.push_back("why");
  bleep.push_back("censored");
  bleep.push_back("strange");
  string input = "";
  string result = "";
  while (cin >> input) {
    bool censor = 0;
    for (int i=0;i<bleep.size();++i) {
      if (bleep[i] == input) censor = 1;
    } 
    if (result != "")
      result += " ";
    if (censor == 1)
      result += "BLEEP";
    else
      result += input;
  }
  cout << result << "\n";

}
