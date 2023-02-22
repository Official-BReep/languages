#include <stdio.h> //add input and output functions

int main(){

    printf("First C app\n");
    printf("I am execute C code\n");

    int myNum = 5;
    printf("My favourite Number is: %d \n", myNum); //%d is to format the printf

    if (20 > 18){
        printf("20 is bigger than 18\n");
    } else {
        printf("The Cake is a lie\n");
    }
    int time = 20;
    (time > 18) ? printf("Good Day.\n") : printf("Good Night\n");

    int day = 5;

    switch (day) {
    case 1:
        printf("Montag");
        break;
    case 2:
        printf("Dienstag");
        break;
    case 3:
        printf("Mittwoch");
        break;
    case 4:
        printf("Donnerstag");
        break;
    case 5:
        printf("Freitag");
        break;
    case 6:
        printf("Samstag");
        break;
    case 7:
        printf("Sonntag");
        break;
    default:
    printf("Eine Woche hat nur 7 Tage");
    }
    return 0;
}