#include <iostream>

int main(){
    bool field[3][3][3] = {
        {"1", "2", "3"},
        {"4", "5", "6"},
        {"7", "8", "9"}
    };
    int row, column, y;
    //std::cout << "Type a row number between 0 and 2: ";
    //std::cin >> row;
    row = 1;
    //std::cout << "Type a column number between 0 and 2: ";
    //std::cin >> column;
    column = 1;
    std::cout << field[row][column];
    //std::cin >> y;
    return 0;
}