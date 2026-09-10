#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits, int times)
{

  std::bitset<4> shiftedBit{bits};

  while (times > 0) {
    shiftedBit = {(bits << 1) | (bits >> 3)};
    times--;
  }
  
  return shiftedBit;
}

int main()
{ 
  int x;
  std::cin >> x;
  std::cout << "How many times do we rotate?";
  int y;
  std::cin >> y;

	std::bitset<4> bits1{ static_cast<std::bitset<4>>(x) };
	std::cout << rotl(bits1, y) << '\n';

	return 0;
}
