#include <iostream>
#include <windows.h>
#include <string>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int shag, choise;
	string text;
	cout << "SHifr Cezarya\n";
	while (true) {
		cout << "Vvedite:\n1 - zashifrovat' tekst\n2 - rasshifrovat' tekst\n3 - vyjti\nVypolnit': ";
		cin >> choise;
		if (choise == 1) {
			cout << "Vvedite shag: ";
			cin >> shag;
			cout << "Vvedite tekst dlya zashifrovki: ";
			cin >> text;
			for (int i = 0; i < text.length(); i++) {

			}
		}
		else if (choise == 2) {
			cout << "Vvedite shag: ";
			cin >> shag;
			cout << "Vvedite tekst dlya rasshifrovki: ";
			cin >> text;
			for (int i = 0; i < text.length(); i++) {

			}
		}
		else if (choise == 3) {
			break;
		}
		else {
			cout << "Vvedeno nevernoe chislo, poprobujte eshchyo raz";
		}
	}	
}