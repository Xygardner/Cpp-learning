#include <iostream>

int takeVal() {

  std::cout << "enter an integer: ";

  int x{};
  std::cin >> x;
  return x;
}

constexpr bool isEven(int x){

  return !(x % 2); 
}

int main() {
  
  int x{takeVal()};
  
  isEven(x) ? std::cout << x << " is Even" : std::cout << x << " is odd";

  return 0;
}
