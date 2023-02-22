#include <iostream>
#include <string>
struct myStruct{
    int number;
    std::string name;
};

int main(){
    struct{ //to save multiple variables
        int myNum;
        std::string myString;
        int myNum2, myNum3, mynum4;
    } myStucture;

    myStucture.myNum3 = 5;
    std::cout << "\n" << myStucture.myNum3 << std::endl; //first method

    //second method
    myStruct myCar1;
    myCar1.name = "myCar1";
    std::cout << myCar1.name << std::endl;

    //references
    std::string food = "Pizza";
    std::string &meal = food;

    std::cout << meal << std::endl;
    std::cout << &food << std::endl;

    //create pointer
    std::string* ptr = &food;
    std::cout << ptr << std::endl;
    return 0;
}