#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //create and open a textfile
    ofstream MyFile("textfile.txt");                                          //Eselsbrücke o = out => Datei wird erstellt, der rest ist der Bibliothekenname
    MyFile << "Hello World, this is a generated Text in a generated file ^^"; //Text will in Datei also <<
    MyFile.close();                                                           //close the file

    //Read File
    string myText; //is for the Text in the File

    ifstream MyReadFile("textfile.txt"); //read from file | Eselsbrücke i = in => Datei wird gelesen, der rest ist der Bibliothekenname

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        cout << myText << "\n"
             << endl; //Output
    }
    MyFile.close();

    //try and catch = pair heißt es muss immer zusammen exestieren, throw gibt (benutzerdefinierten) Fehler zurück
    //Example:
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 505; //505 = myNum
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Error number: " << myNum;
    }
return 0;
}