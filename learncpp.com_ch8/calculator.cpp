#include <iostream>

int calculator(int x, char z, int y) {
  switch (z) {
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
    default:
          std::cout << "Jhatu ye kaunsa operation hai?";
    return 0.0;
  }
}

int takeVal() {
  [[maybe_unused]] int x{};
  static int is_firstcall{1};
  [[maybe_unused]] char y{};

  switch (is_firstcall) {
    case 1: std::cout << "\eenter first Intiger: ";
            ++is_firstcall;
            break;
    case 2: std::cout << "\nenter character to  be multiplied: ";
            ++is_firstcall;
            break;
    case 3: std::cout << "\nenter second intiger: ";
            ++is_firstcall;
            break;
    default:
            std::cout << "error";
            break;
  }

  switch (is_firstcall) {
    case 3: std::cin >> y; 
            return static_cast<int>(y);
  default:
            std::cin >> x;
            return x;
  }
  

}

int main (int argc, char *argv[]) {

  int op1{takeVal()};
  char char1{static_cast<char>(takeVal())};
  int op2{takeVal()};

  std::cout << "\nThe Final Output is: " << calculator(op1, char1, op2);
  
  return 0;
}
