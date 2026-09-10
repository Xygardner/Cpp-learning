#include <iostream>


float getValfromUser() {

  std::cout << "Enter a Double Value: ";
  float x{};
  std::cin >> x;
  return x;
}

char getcharfromUser() {
  std::cout << "Enter +, -, * or /: ";
  char x{};
  std::cin >> x;
  return x;
}

int main() {

  float x{getValfromUser()};
  std::cout << '\n';
  float y{getValfromUser()};
  std::cout << '\n';
  char z{getcharfromUser()};
  if (z == '*')
  std::cout << x << " * " << y << " is " << x * y;
  else if (z == '+') std::cout << x << " + " << y << " is " << x + y;
  else if (z == '-') std::cout << x << '-' << y << " is " << x - y;
  else if (z == '/') {
    if (y > 0) std::cout << x << '/' << y << " is " << x / y;
    else if (y <0) std::cout << x << " / " << y << " is " << x / y;
    else std::cout << " teri maa ka bhosda ";
  }

  else std::cout << " teri maa ka bhosda";
  return 0;


}
