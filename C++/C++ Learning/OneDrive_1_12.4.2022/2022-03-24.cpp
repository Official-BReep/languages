#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    cout << 65;
    const int number = 5; //Variable number mit dem int-Wert 5 kann nicht mehr geändert werden
    //int number = 10; //Fehler kommt

    cout << "\n";

    cout << number;
    
    //fstring
    string my_name = "Michael"; //string kann man nicht in fstrings verwenden
    char name[] = "Michael"; //char akzeptiert nur single quotes, die [] wandelt ' in "" um heißt man muss dann mit "" schreiben.
    int my_age = 107;
    printf("\nHello my name is %s. I am %d years old.", name, my_age);
    cout << "\nMy age is: " << my_age << endl; //fstring method 2 | endl = \n
    cout << "abcdefg";

    //userinput
    int x;
    cout << "\nType a Number: ";
    cin >> x;
    cout << "\nYour Number is " << x;
    return 0;
}