#import "../../std_lib_facilities.h"

int main() {
  cout << "Enter an operator (+, -, * /, plus, minus, mul, div) and two operands (floating points) and I will calculate the result:\n";
  string op = "";
  double num1 = 0, num2 = 0;
  cin >> op >> num1 >> num2;
  double result = 0;
  if (op == "plus") op = "+";
  if (op == "minus") op = "-";
  if (op == "mul") op = "*";
  if (op == "div") op = "/";
  if (op == "+") {
    result = num1 + num2;
  } else if (op == "-") {
    result = num1 - num2;
  } else if (op == "*") {
    result = num1 * num2;
  } else if (op == "/") {
    result = num1 / num2;
  } else {
    cout << "The operator you specified, " << op << ", was invalid.\n";
    return 1;
  }
  cout << num1 << op << num2 << "=" << result << "\n";

}
