#include <iostream>

int main(){
    int x, y;
    x = 5;
    y = 10;
    //if
    if(x > y){
        std::cout << "x is greater then y";
    }
    else if(x < y){
        std::cout << "x is less then y";
    }
    else{
        std::cout << "This is false";
    }

    //if method 2
    std::string result = (x < y) ? "Yes" : "No";
    std::cout << "\n" << result << std::endl;

    int day = 9;
    switch(day){
        case 1:
            std::cout << "Monday";
        break; //used to exit a loop for example
        case 2:
            std::cout << "Tuesday";
        break;
        case 3:
            std::cout << "Wednesday";
        break;
        case 4:
            std::cout << "Thursday";
        break;
        case 5:
            std::cout << "Friday";
        break;
        default:
            if(day > 0){
                if(day < 8){
                    std::cout << "It's Weekend";
            }
        }
    }

    int i = 0;
    while(i < 6){
        std::cout << "\n" << i;
        i++;
    }

    //   do/while loop
    i = 0;
    do {
        std::cout << "\n" << i;
        i++;
    }
    while (i < 9);

    std::cout << "\n";

    //for-loop
    for(int i = 0; i < 5; i++){ //before the execution of the code block;defines the condition for executing;every time after the execution
        std::cout << "\n" << i;
    }

    //continue überspringt einen Durchlauf

    //Arrays
    std::string cars[4] = {"Volvo","BMW","Porsche", "Mazda"};
    std::cout << "\n" << cars[2] << std::endl;

    //arrays and loops
    i = 0;
    int j = 3;
    while(i != j){
        std::cout << cars[i] << std::endl;
        i++;
    }

    //size of array
    int myNumbers[] = {1,2,3,4};
    std::cout << "\n" << sizeof(myNumbers) << std::endl; //sizeof gibt ergebnis in Bytes zurück. 1 int have 4 bytes, so we must calculate 4(length of list/array) with 4(bytes per int). 4*4= 16

    std::cout << "\n" << "Die Liste hat " << sizeof(myNumbers)/sizeof(int) << " Elemente" << std::endl;
    return 0;
}