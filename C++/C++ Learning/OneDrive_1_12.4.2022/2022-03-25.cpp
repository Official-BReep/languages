#include <iostream>
#include <string> //Include the string library to use strings

int main(){
    std::cout << "Hello World\n";

    /*
    <=>     Drei Wege Vergleich. kleiner als 0, falls linker Operand kleiner als rechter
                                 gleich 0, falls linker Operand gleich dem rechten
                                 größer als 0, falls linker Operand größer als rechter
    &       Bitweise Und-Verknüpfung  bsp.: 1100
                                            1010
                                            ----
                                            1000

    |       Bitweise Oder-Verknüpfung bsp.: 1100
                                            1010
                                            ----
                                            1110
                                            
    ^       Exklusive Oder-Verknüpfung bsp.: 1100
                                             1010
                                             ----
                                             0110
                                             
    ~       Bitweise Negation          bsp.: 10
                                             --
                                             01
    
    <<      Linksverschiebung          bsp.: int i = 1       //dual: 00000001
                                             int n = i << 1; //dual: 00000010 = 2

    >>      Rechtsverschiebung         bsp.: int i = 5; //dual: 00000101
                                             int n = i >> 1; //dual: 00000010 = 2
                                             int a = -2; //dual: 11111110
                                             int b = a >> 1; //dual: 11111111 = -1*/

    /*Logical Operators
    &&       Logical and        Returns true if both statements are true
    ||       Logical or         Returns true if one of the statements is true
    !        Logical not        Reverse the result, return false if the result is true*/


    //string concatenation
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName; //combine 2 strings (method 1)
    std::cout << fullName;

    std::string vollerName = firstName.append(lastName); //combine 2 strings (method 2)
    std::cout << "\n" << vollerName << std::endl;


    //numbers and strings
    /*int x = 10;
    int y = 20;
    int z = x + y;*/ //z will be 30 (an intager)

    std::string x = "10";
    std::string y = "20";
    std::string z = x + y; //z will be 1020 (a string)
    /*  |
        |
       \ /  
        `´     */
    //you cant combine strings and numbers

    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the text is: " << txt.length(); //txt.length() = txt.size()
    return 0;

}