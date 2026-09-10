#include <iostream>

int main (int argc, char *argv[]) {

 int ycounter{1};
 while (ycounter<=5) {

   int xcounter{ycounter};
   int zcounter{5 - xcounter};

   while (zcounter >= 1) {
     std::cout << "  ";
     --zcounter;
    }

   while (xcounter >= 1) {
     std::cout << xcounter << ' ';
     --xcounter;  
    }


  std::cout << '\n';
  ++ycounter;
 }


  return 0;
}
