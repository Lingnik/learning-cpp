
//
// This is example code from Chapter 4.4.1.1 "If-statements" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

int main()
{
    double yen_to_dollar = 0.00837;
    double euro_to_dollar = 1.17647;
    double pound_to_dollar = 1.51515;
    double yuan_to_dollar = 0.16103;
    double kroner_to_dollar = 0.15873;

    char in_currency = 0;
    char out_currency = 0;
    double in_amount = 0;
    cout << "Enter a currency conversion to perform in the format: source_currency amount dest_currency.\n";
    cout << " Currency can be y(en), e(uro), p(ound), (y)u(an), k(rone), or d(ollar). Amount can be a floating-point number.\n";
    cout << " Input: ";
    cin >> in_currency >> in_amount >> out_currency;

    double out_amount = in_amount;

    string in_currency_long = "";
    string out_currency_long = "";

    // Convert first to dollar.
    switch (in_currency) {
      case 'y':
        out_amount *= yen_to_dollar;
        in_currency_long = "yen";
        break;
      case 'e':
        out_amount *= euro_to_dollar;
        if (in_amount != 1.0 && in_amount != -1.0) {
          in_currency_long = "euros";
        } else {
          in_currency_long = "euro";
        }
        break;
      case 'p':
        out_amount *= pound_to_dollar;
        if (in_amount != 1.0 && in_amount != -1.0) {
          in_currency_long = "pounds";
        } else {
          in_currency_long = "pound";
        }
        break;
      case 'd':
        if (in_amount != 1.0 && in_amount != -1.0) {
          in_currency_long = "dollars";
        } else {
          in_currency_long = "dollar";
        }
        break;
      case 'u':
        out_amount *= yuan_to_dollar;
        in_currency_long = "yuan";
        break;
      case 'k':
        out_amount *= kroner_to_dollar;
        if (in_amount != 1.0 && in_amount != -1.0) {
          in_currency_long = "kroner";
        } else {
          in_currency_long = "krone";
        }
        break;
      default:
        cout << "Source currency was invalid: " << in_currency << "\n";
        return 1;
        break;
    }

    // Then convert to target currency.
    switch (out_currency) {
      case 'y':
        out_amount /= yen_to_dollar;
        out_currency_long = "yen";
        break;
      case 'e':
        out_amount /= euro_to_dollar;
        if (out_amount != 1.0 && out_amount != -1.0) {
          out_currency_long = "euros";
        } else {
          out_currency_long = "euro";
        }
        break;
      case 'p':
        out_amount /= pound_to_dollar;
        if (out_amount != 1.0 && out_amount != -1.0) {
          out_currency_long = "pounds";
        } else {
          out_currency_long = "pound";
        }
        break;
      case 'd':
        if (out_amount != 1.0 && out_amount != -1.0) {
          out_currency_long = "dollars";
        } else {
          out_currency_long = "dollar";
        }
        break;
      case 'u':
        out_amount /= yuan_to_dollar;
        out_currency_long = "yuan";
        break;
      case 'k':
        out_amount /= kroner_to_dollar;
        if (out_amount != 1.0 && out_amount != -1.0) {
          out_currency_long = "kroner";
        } else {
          out_currency_long = "krone";
        }
        break;
      default:
        cout << "Destination currency was invalid: " << out_currency << "\n";
        return 1;
        break;
    }

    cout << in_amount << " " << in_currency_long << " converts to " << out_amount << " " << out_currency_long << ".\n";

    //int a = 0;
    //int b = 0;
    //cout << "Please enter two integers\n";
    //cin >> a >> b;

    //if (a<b)    // condition
    //    // 1st alternative (taken if condition is true):
    //    cout << "max(" << a << "," << b <<") is " << b <<"\n";
    //else
    //    // 2nd alternative (taken if condition is false):
    //    cout << "max(" << a << "," << b <<") is " << a << "\n";
}

//------------------------------------------------------------------------------

