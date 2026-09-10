#include <iostream>

bool isBigger(int x, int y) {
  return x > y;
}

bool isEqual(int x, int y) {
  return x == y;
}

void lund_comment(float x) {
  if (x <= 4) std::cout <<"\nnapunsak hai kya saale?";
  else if (x <6) std::cout << "\ntheek thaak hi hai";
  else std::cout << "\nsaale beewi chodega kya meri??";
}

int main() {
  std::cout << "Aaj hum do logoka Lund compare karenge\n" << "Pehele tum batao?";

  float lund1{};
  std::cin >> lund1;
  lund_comment(lund1);

  std::cout << "\n\aab tum batao?";
  float lund2{};
  std::cin >> lund2;
  lund_comment(lund2);

  std::cout << "compare kartien hain\n";

  if (isEqual(lund1,lund2) == 1) std::cout << "Same hi hai dono ka";
  else if (isBigger(lund1,lund2) == 1) std::cout << "Dusre waala bottom hai";
  else std::cout << "pehle waala bottom hai";

  return 0;

}



