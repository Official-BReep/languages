#include <iostream>
using namespace std;

class MyClass {   //the class
    private:
        int myNum2; //you can't access from outside but you can use set and get
    public:      //Access specifier Public: you can acces from outside
        int myNum;
        string myString;

        //Setter
        void setmyNum2(int s){
            myNum2 = s;
        }
        //Getter
        int getmyNum2() {
            return myNum2;
        }
};

class MyClass2 {
    public:
        void myMethod(){ //function in Class
            cout << "Hello World!" << endl;
        }
};

//class with parameters
class Car {
    public:
        int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
    return maxSpeed;
}

//class with construktor
class Construktor{
    public:
        Construktor(){
            cout << "I'm a Construktor" << endl;
        }
};

//Vererbung
//Base class und mit mehrfacher Vererbung
class Vehicle {
    public:
        string brand = "Ford";
        void honk(){
            cout << "Tuut, tuut! \n";
        }
};

//Derived class
class Car2: public Vehicle { //Child
    public:
        string model = "Mustang";
};

class MyGrandchild: public Car2{  //Grandchild
    public:
        int meineNummer = 50;
};

class MyChildClass: public Vehicle, public Construktor{ //mehrfache Vererbung
};

int main(){
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Some text";
    myObj.setmyNum2(50);

    cout << myObj.myString << endl;
    cout << myObj.myNum << endl;
    cout << myObj.getmyNum2() << endl;

    MyClass2 myObj2;
    myObj2.myMethod();

    Car myCar;
    cout << myCar.speed(200) << endl;

    Car2 myCar2;
    myCar2.honk();
    cout << myCar2.brand + " " + myCar2.model << endl;
    return 0;
}