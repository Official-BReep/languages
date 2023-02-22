#include <iostream>
void myFunction(){ //deklaration
    std::cout << "Ich wurde ausgeführt\n"; //definition
}

//Function with parameter
void myFunction2(std::string arg){
    std::cout << arg << " Refnes\n";
}

//Function with default parameter
void defaultFunction(std::string country = "Norwegen"){
    std::cout << country << "\n";
}

//Use return to get a result from a function

int main(){
    myFunction();
    myFunction2("Peter");
    defaultFunction();
    defaultFunction("Schweden");
    return 0;
}