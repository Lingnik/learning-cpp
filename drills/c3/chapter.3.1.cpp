
//
// This is example code from Chapter 3.1 "Input" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

// read and write a first name
int main()
{
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name = "UNKNOWN";    // first_name is a variable of type string
    cin >> first_name;    // read characters into first_name
    cout << "How old are they? (in years):\n";
    int recipient_age = -1;
    cin >> recipient_age;
    if (recipient_age <= 0 || recipient_age >= 110) {
      simple_error("you're kidding!");
    }
    cout << "Enter your friend's name:\n";
    string friend_name = "UNKNOWN";
    cin >> friend_name;
    cout << "Enter your friend's gender (m or f):\n";
    string friend_sex = "UNKNOWN";
    cin >> friend_sex;
    string friend_pronoun = "they";
    if (friend_sex == "m") {
      friend_pronoun = "him";
    } else if (friend_sex == "f") {
      friend_pronoun = "her";
    }

      
    cout << "Dear " << first_name << ",\n";
    cout << "  Sup? dyk c++ is awesome? it is.\n";
    cout << "  gtg, " << friend_name << " broke the server.\n";
    cout << "  u need to call " + friend_pronoun + ".\n";
    cout << "  btw happy birthday #" << recipient_age << ", ";
    if (recipient_age < 12) {
      cout << "whippersnapper.\n";
    } else if (recipient_age == 17) {
      cout << "you're almost legal!\n";
    } else if (recipient_age > 70) {
      cout << "does that mean we have to get you black balloons when you turn " << (recipient_age+1) << "?\n";
    } else {
      cout << "let's celebrate later\n";
    }
    cout << "ttyl,\n\n\nT\n";
}

//------------------------------------------------------------------------------
