#include "random_card_generation.cpp"
#include <thread>
#include <chrono>
#include <string>

bool hit(){

  char x{};

  while (true) {
   std::cout << "\nhit??";
   std::cin >> x;

   switch (x) {
     case ('y'): return true;
     case ('n'): return false;
     default: std::cout << "\nError: Choose between y or n";
   }
  }
}

int blackJack(int initCard) {
  int deck{};
  deck += initCard;
  std::cout << "\ncard: ";
  

  bool temp_bool{};
  
  do {
    deck += cards(numGen());
  }
  while (deck <= 21 && hit());

  if (deck == 21) std::cout << "\nBLACKU JACKU!!!!!";
  else if (deck > 21) std::cout << "aww you overFlowed";

  return deck;
}

int blackJack_dealer(int initCard, int UserDeckVal) {
  int deck{};
  deck += initCard;
  std::cout << "\ncard: ";
  int current_card{numGen()};
  deck += cards(current_card);
  
  do {
      deck += cards(numGen());
      std::cout << '\n';
      std::this_thread::sleep_for(std::chrono::seconds(1));
  } while (deck <= 17 && deck <= UserDeckVal);

  if (deck == 21) std::cout << "\nBLACKU JACKU!!!!!";
  else if (deck > 21) std::cout << "Dealer overFlowed!!!";

  return deck;
}


bool continuePlaying(){
   
   char x{};
   std::cout << "\n Continue Playing and Shuffle??";
   std::cin >> x;

   switch (x) {
     case ('y'):
       Shuffle();
       return true;
     case ('n'): return false;
     default: std::cout << "\nOkay Bye bye!!";
              return false;
   }


}

int main (int argc, char *argv[]) {

  std::cout << "welcome to Black Jack By Krishna!!\n";
  std::string name{};
  std::cout << "Please state your name: ";
  std::cin >> name;
  std::cout << "\nchutiye ka naam:" << name;

  int count{};

  while (continuePlaying()) {
    std::cout << "\ndealer: ";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    int initCard {cards(numGen())};
    std::cout << "\nYour card:";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    int initCard2 {0};
    int UserDeckVal{blackJack(initCard2)};

    std::cout << "\n Lets see the Dealer cards: ";
    int DealerDeckVal{blackJack_dealer(initCard, UserDeckVal)};

    if (UserDeckVal > DealerDeckVal) std::cout << "\nYOU WONNNNNNNN";
    else if (UserDeckVal == DealerDeckVal) std::cout << "\ndraw";
    else std::cout << "You LOST!!!!";
    
    if (AppearedCardsarray.size() > 42) Shuffle();

    ++count;

    if (count > 3) continuePlaying();

  }

  return 0;
}


