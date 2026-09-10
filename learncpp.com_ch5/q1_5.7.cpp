#include <iostream>
#include <string>

using namespace std::string_literals;

std::string username() {
  std::string name{};  
  std::cout << "what is your name: "s;
  std::getline(std::cin >> std::ws, name);
  return name;

}

int age() {
  int age{};
  std::cout << "what is your age"s;
  std::cin >> age;
  return age;
}

int addition(int age, int nameChar) {
  return age + nameChar;
}

int main () {

  std::string name{username()};
  int number_of_char_in_name{static_cast<int>(name.length())};
  int Age{age()};

  std::cout << "the sum of name and age is:"s << addition(Age,number_of_char_in_name);
  

  return 0;
}
