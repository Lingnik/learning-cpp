#include "../../std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{

  cout << "Think of a number between 1 and 100." << endl;
  cout << endl;
  int top = 100;
  int bottom = 1;
  int guess = 50;
  int guesses = 0;
  bool found = 0;

  //while (bottom < top && bottom-1<2) {
  while (found == 0) {
    if (top-bottom>1) {
      cout << "Your number is between " << bottom << " and " << top << "." << endl;
      if (guesses > 0) cout << "I've made " << guesses << " guesses." << endl;
      cout << "Is your number less than " << guess << "? (y/n)" << endl;
      char answer = 'x';
      cin >> answer;
      switch (answer) {
        case 'y':
          top = guess-1;
          ++guesses;
          break;
        case 'n':
          bottom = guess;
          ++guesses;
          break;
        default:
          cout << "You can only say 'y' or 'n'. This doesn't count as a guess." << endl;
          break;
      }
      guess = (top-bottom)/2+bottom;
    } else {
      guess = bottom;
      cout << "Your number is between " << bottom << " and " << top << "." << endl;
      if (guesses > 0) cout << "I've made " << guesses << " guesses." << endl;
      cout << "Is your number " << guess << "?" << endl;
      char answer = 'x';
      cin >> answer;
      switch (answer) {
        case 'y':
          found = 1;
          ++guesses;
          break;
        case 'n':
          ++bottom;
          ++guesses;
          break;
        default:
          cout << "You can only say 'y' or 'n'. This doesn't count as a guess." << endl;
          break;
      }
    }
  }

  cout << "I guessed it in " << guesses << " tries! Your number was " << guess << "!" << endl;


}

//------------------------------------------------------------------------------
