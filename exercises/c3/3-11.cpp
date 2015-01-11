#import "../../std_lib_facilities.h"

int main() {
  int pennies=0, nickels=0, dimes=0, quarters=0, half_dollars=0, one_dollars=0;
  cout << "How many pennies do you have?           ";
  cin >> pennies;
  cout << "How many nickels do you have?           ";
  cin >> nickels;
  cout << "How many dimes do you have?             ";
  cin >> dimes;
  cout << "How many quarters do you have?          ";
  cin >> quarters;
  cout << "How many half-dollar coins do you have? ";
  cin >> half_dollars;
  cout << "How many one-dollar coins do you have?  ";
  cin >> one_dollars;

  int cents = 0;
  cents += pennies;
  cents += nickels*5;
  cents += dimes*10;
  cents += quarters*25;
  cents += half_dollars*50;
  cents += one_dollars*100;

  double dollars = cents/100.0;

  cout << "You have " << pennies << " ";
  if (pennies == 1) { cout << "penny.\n"; } else { cout << "pennies.\n"; }

  cout << "You have " << nickels << " ";
  if (nickels == 1) { cout << "nickel.\n"; } else { cout << "nickels.\n"; }

  cout << "You have " << dimes << " ";
  if (dimes== 1) { cout << "dime.\n"; } else { cout << "dimes.\n"; }

  cout << "You have " << quarters << " ";
  if (quarters== 1) { cout << "quarter.\n"; } else { cout << "quarters.\n"; }

  cout << "You have " << half_dollars << " ";
  if (half_dollars== 1) { cout << "half-dollar coin.\n"; } else { cout << "half-dollar coins.\n"; }

  cout << "You have " << one_dollars << " ";
  if (one_dollars== 1) { cout << "one-dollar coin.\n"; } else { cout << "one-dollar coins.\n"; }

  cout << "The sum of this is " << cents << "cents, or $" << dollars << ".\n";
}
