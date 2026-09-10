#include <iostream>

int add(int x, int y) {
  return x + y;
}

int product(int x, int y) {
  return x * y;
}

int fraction(int x, int y) {
  return x/y;
}

int difference(int x, int y) {
  return x - y;
}

int input1() {

  int x{};

  std::cout << "gib num1";
  std::cin >> x;

  return x;
}

int input2() {
  int x{};
  std::cout << "gib num2";
  std::cin >> x;

  return x;

}
