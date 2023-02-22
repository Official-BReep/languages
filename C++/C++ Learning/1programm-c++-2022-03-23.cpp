#include <iostream> //dies ist ein Kommentar | Bibliothek für ein und Ausgabe
//using namespace std; //um das std:: zu sparen

int main() {
	std::cout << "Hello World!\n"; //mit \n wird ein Zeilen umbruch gemacht oder mit endl
	std::cout << "I am learning C++\n"; //mit << wird gesagt gebe das und das aus

	int number; //festlegen, dass unter der Variable number ein int Wert gespeichert wird
	number = 65; // festlegen des int-Wertes, der unter der Variable gespeichert wird 
	std::cout << number; //ausgeben des int-Wertes number

	std::cout << "\n";

	int x, y, z;  //Definition mehrerer Variablen Variante 1
	x = y = z = 50; // alle definierten Variablen haben denselben Wert
	std::cout << x + y + z; //Addition

	std::cout << "\n";

	int u = 5, i = 6, r = 50; //Definition mehrerer Variablen Variante 2
	std::cout << u + i + r;

	return 0; //um Programm zu beenden
} //um die funktion zu schließen

/*Dies
ist
ein
mehrzeiliger
Kommentar*/