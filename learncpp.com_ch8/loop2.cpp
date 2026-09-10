#include <iostream>

int main (int argc, char *argv[]) {

  char starting_char{'a'};

  while (static_cast<int>('z') >= static_cast<int>(starting_char)) {

    std::cout << starting_char << ' ' << static_cast<int>(starting_char) << ' ';

    ++starting_char;
    
  }

  return 0;
}
