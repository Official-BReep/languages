#include <iostream>

int main() {
  int anzahl = 0;
  std::string field[3][3] = {
      {"-", "-", "-"}, 
      {"-", "-", "-"}, 
      {"-", "-", "-"}
      };
  std::string player = "X";
  while (anzahl < 1) {
    int i, j;
    //std::cout << "\nType a Number between 1 and 3: ";
    //std::cin >> i;
    i = 1;
    i = i - 1;
    //std::cout << "\nType a Number between 1 and 3: ";
    //std::cin >> j;
    j = 1;
    j = j - 1;
    std::cout << field[i][j];
    if (field[i][j] == "-") {
        field[i][j] = player;
      }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            //std::cout << i << std::endl;
            std::cout << field[i][j];
        }
    }
  anzahl += 1;
  }
return 0;
}