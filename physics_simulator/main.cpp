#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <string_view>
#include <random>

constexpr double gravity{9.80665};
constexpr double time_step{0.01};
constexpr double restitution{-0.6};

double getTowerHeight()
{ 

  std::mt19937 mt{std::random_device{}()};

	std::cout << "Enter the height of the tower in meters, press 0 if you wanna randomise the tower height: ";
	double towerHeight{};
	std::cin >> towerHeight;

  std::uniform_real_distribution<float> towerRandom{20.0f, 100.0f};

  if (towerHeight == 0) {
     return towerRandom(mt); 
  }
	return towerHeight;
}


double calculateBallHeight(double towerHeight, double totaltime, double ballvelocity, bool bound) {

  double u{};
  double t{totaltime};
  u += ballvelocity;
  if (bound) {
    double distance{-((u*t)+(gravity*t*t*0.5))};
    return distance;
  }
  else {
    double fallDistance{(u*t)+(gravity*t*t*0.5)};
    return towerHeight - fallDistance;
  }
}

double calculateBallVelocity(double ballHeight, double v) {
  
  double velocity{};
  if (ballHeight < 0.5) {
    velocity = restitution*v;
    std::cout << "rebound!!!!!";
  }
  else velocity = v;
  double finalVelocity{velocity+(gravity*time_step)};
  return finalVelocity;
}

void printBallstats(double ballHeight, double totaltime, double ballvelocity)
{
	std::cout << "             time: " << totaltime << "           height: " << ballHeight << "            velocity: " << ballvelocity << '\n';
}


int main()
{
	const double towerHeight{ getTowerHeight() };

  std::cout << "towerHeight: " << towerHeight;
  std::this_thread::sleep_for(std::chrono::milliseconds(500));

  double totaltime{};
  double initialVelocity{};
  bool bound{false};
  double pseudo_totaltime{};
  double height{};

  while (true) {

    totaltime += time_step;
    pseudo_totaltime += time_step;

    if (height < 0){
      bound = true;
      height = 0;
    }

    height = calculateBallHeight(towerHeight, pseudo_totaltime, initialVelocity, bound);

    if (bound) {
      pseudo_totaltime = 0;
      bound = false;
    }

    initialVelocity = calculateBallVelocity(height, initialVelocity);
    printBallstats(height, totaltime, initialVelocity);
            
    std::this_thread::sleep_for(std::chrono::milliseconds
        (static_cast<int>(time_step*1000)));

  }
	return 0;
}
