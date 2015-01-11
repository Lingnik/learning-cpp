
//
// This is example code from Chapter 4.5.1 "Why bother with functions?" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int square(int v) {
  int result = 0;
  for (int i=0;i<v;++i) {
    result += v;
  }
  return result;
}

void print_square(int v)
{
    cout << v << '\t' << square(v) << '\n';
}

//------------------------------------------------------------------------------

int main()
{
    for (int i = 0; i<100; ++i) print_square(i);
}

//------------------------------------------------------------------------------
