#include <iostream>

float giveHeight(int time, int height) {
  float ball{height - 0.5f*9.8f*time*time};
  return ball;

}

int towerHeight() {
  std::cout << "enter the Height of the Tower in meters: ";
  int x{};
  std::cin >> x;
  return x;
}

int main () {

  int height{towerHeight()};

  std::cout << "At 0 seconds, the ball is at height: " << giveHeight(0, height);
  std::cout << "At 1 seconds, the ball is at height: " << giveHeight(1, height);
  std::cout << "At 2 seconds, the ball is at height: " << giveHeight(2, height);
  std::cout << "At 3 seconds, the ball is at height: " << giveHeight(3, height);
  std::cout << "At 4 seconds, the ball is at height: " << giveHeight(4, height);
  std::cout << "At 5 seconds, the ball is at height: " << giveHeight(5, height);

  return 0;

}
