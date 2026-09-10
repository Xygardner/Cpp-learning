#include <iostream>

void fizzbuzz(int x) {

  for (int i{}; i <= x; i++) {

    if (i%3 == 0) std::cout << "fizz";
    if (i%5 == 0) std::cout << "buzz";
    if (i%7 == 0) std::cout << "pop";

    else std::cout << '\n' << i << '\n';
    
  }

}
int main (int argc, char *argv[]) {
  std::cout << "fizzbuzz to what? :";
  int x{};
  std::cin >> x;
  fizzbuzz(x);
  return 0;
}
