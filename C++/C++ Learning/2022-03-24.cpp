#include <iostream>
#include <stdio.h>

int main(){
    std::cout << 65;
    const int number = 5; //Variable number mit dem int-Wert 5 kann nicht mehr geändert werden
    //int number = 10; //Fehler kommt

    std::cout << "\n";

    std::cout << number;
    
    //fstring
    std::string my_name = "Michael"; //string kann man nicht in fstrings verwenden
    char name[] = "Michael";
    int my_age = 107;
    printf("\nHello my name is %s. I am %d years old.", name, my_age);
    std::cout << "\nMy age is: " << my_age << std::endl; //fstring method 2 | endl = \n
    std::cout << "abcdefg\n";

    //userinput
    int x, y, z;
    /*std::cout << "\nType a Number: \n"; //ausgesprochen see-out
    std::cin >> x; //ausgesprochen see-in
    std::cout << "\nYour Number is " << x;
    std::cin >> y;

    //numbers
    float myNum = 5.75;
    std::cout << myNum;

    std::cout << "\n";

    double myNumm = 19.99;
    std::cout << myNumm;

    std::cout << "\n";

    float f1 = 35e3; //z.B e3 oder E4 sind bei double und float möglich
    double d1 = 12E4;
    std::cout << f1;
    std::cout << "\n";
    std::cout << d1;
    std::cin >> z;*/

    //bool
    bool isCodingFun = true;
    bool isFishTasty = false;

    std::cout << isCodingFun; //1 = true

    std::cout << "\n";

    std::cout << isFishTasty; //0 = false

    //char types
    char myGrade = 'B'; //store a single Charakter in single quates
    std::cout << "\n" << myGrade << std::endl;

    char a = 65, b = 66, c = 67; //ASCII values are possible
    std::cout << a << "\n" << b << "\n" << c << std::endl;

    //print strings
    std::string greeting = "Hello";
    std::cout << greeting;

    /*operator
    =       bsp. x = 5
    +=      bsp. x=x+3
    -=      bsp. x=x-3
    *=      bsp. x=x*3
    /=      bsp. x=x/3
    %=      bsp. x=x%3
    &=      bsp. x=x&3
    |=      bsp. x=x|3
    ^=      bsp. x=x^3
    >>=     bsp. x=x>>3
    <<=     bsp. x=x<<3
    ==
    !=
    >
    <
    >=
    <=
    */

    int o = 5, h=3;
    std::cout << "\n" << (o != h);
    return 0;
}