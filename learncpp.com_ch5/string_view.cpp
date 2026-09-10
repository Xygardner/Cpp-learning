#include <iostream>
#include <string>
#include <string_view>

using namespace std::string_view_literals;

std::string getName() {
  std::string name{};
  std::getline(std::cin >> std::ws, name);
  return name;
}

int getAge() {
  int x{};
  std::cin >> x;
  return x;
}

int main() {

  std::cout << "enter the Name of Person 1: "sv;
  std::string name1{getName()};
  std::cout << "Enter the age of "sv << name1 << ':';
  const int age1{getAge()};

  std::cout << "Enter Name of Person 2: "sv;
  std::string name2{getName()};
  std::cout << "enter the age of "sv << name2 << ':';
  const int age2{getAge()};

  if (age1 > age2) std::cout << name1 << " (age"sv << age1 << ") is older than "sv << name2 << " (age "sv << age2 << ")."sv;
  else if (age1 == age2) std::cout << name1 << " (age"sv << age1 << ") is equal to "sv << name2 << " (age "sv << age2 << ")."sv;
  else std::cout << name2 << " (age"sv << age2 << ") is older than "sv << name1 << " (age "sv << age1 << ")."sv;

  return 0;


}
