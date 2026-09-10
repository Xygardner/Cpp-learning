#include <iostream>
#include <string>

int main() {

  std::cout << "what is Your name?";

  std::string name{};
  std::string name_e{};
  std::cin >> std::ws >> name;

  std::cout << "your Name is " << name << std::endl;

  return 0;


}
