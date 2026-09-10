#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std::string_literals;

std::vector<int> AppearedCardsarray;

bool checkAppearedcards(int x) {
  
  for (size_t i = 0; i < AppearedCardsarray.size(); i++) {
    if (AppearedCardsarray[i] == x) return true;
  }
  return false;
}

void Shuffle() {
  AppearedCardsarray.clear();
}

int numGen(){

  std::vector<int> arr;
  //seed gen
  std::random_device x;
  //mersense twisterrrrarr
  std::mt19937 mt{x()};

  std::uniform_int_distribution<int> lmao{1,52};

  int card;

  do {
    card = lmao(mt);
  } while(checkAppearedcards(card));

  AppearedCardsarray.push_back(card);
  return card;
}

int cards(int x) {

  int card_value{};

  if ((x%13)==0) std::cout << "Ace ";    
  else if ((x%(13))==1){
    std::cout << "Two ";
    card_value = 2;
  }
  else if ((x%(13))==2){
    std::cout << "Three ";
    card_value = 3;
  }
  else if ((x%(13))==3){
    std::cout << "Four ";
    card_value = 4;
  }
  else if ((x%(13))==4){
    std::cout << "Five ";
    card_value = 5;
  }
  else if ((x%(13))==5){
    std::cout << "Six ";
    card_value = 6;
  }
  else if ((x%(13))==6){
    std::cout << "Seven ";
    card_value = 7;
  }
  else if ((x%(13))==7){
    std::cout << "Eight ";
    card_value = 8;
  }
  else if ((x%(13))==8){
    std::cout << "Nine ";
    card_value = 9;
  }
  else if ((x%(13))==9){
    std::cout << "Ten ";
    card_value = 10;
  }
  else if ((x%(13))==10){
    std::cout << "Jack ";
    card_value = 10;
  }
  else if ((x%(13))==11){
    std::cout << "Queen ";
    card_value = 10;
  }
  else {
    std::cout << "King ";
    card_value = 10;
  }

  if (x<=13) std::cout << "of Spades";
  else if ( (x>13) && (x<=26) ) std::cout << "of clubs";
  else if ( (x>26) && (x<=39) ) std::cout << "of diamond";
  else std::cout << "of hearts";

  if (x%13 == 0) {
    int x{};
    std::cout << "\nwhat value shall your ace hold for now?";
    std::cin >> x;
    card_value = x;    
  }

  return card_value;
}
