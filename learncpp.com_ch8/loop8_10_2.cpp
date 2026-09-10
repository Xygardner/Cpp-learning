#include <iostream>

int sumTo(int x) {
  static int sumUntilnow{0};
  for (int i{0}; i <= x; ++i ) {
    sumUntilnow += i;
  }
  return sumUntilnow;
}

int takeVal() {

  std::cout << "add until what?? ";

  int x{};
  std::cin >> x;
  return x;

}

int main (int argc, char *argv[]) {

  int userTakenval{takeVal()};
  
  std::cout << "\nthe total sum is: " << sumTo(userTakenval); 
  
  return 0;
}
