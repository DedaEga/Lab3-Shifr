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
				if ((text[i] > 64) and (text[i] < 123)) {			//изменение кода английских символов
					text[i] += shag % 26;
				}
				else if ((text[i] > -65) and (text[i] < 1)) {		//изменение кода русских символов
					text[i] += shag % 32;
				}
			}
			cout << "Zashifrovannyj tekst: " << text << endl;
		}
		else if (choise == 2) {
			cout << "Vvedite shag: ";
			cin >> shag;
			cout << "Vvedite tekst dlya rasshifrovki: ";
			cin >> text;
			for (int i = 0; i < text.length(); i++) {
				if ((text[i] > 64) and (text[i] < 123)) {			
					text[i] -= shag % 26;							//теперь вычитаем шаг
				}
				else if ((text[i] > -65) and (text[i] < 1)) {		
					text[i] -= shag % 32;
				}
			}
			cout << "Zashifrovannyj tekst: " << text << endl;
		}
		else if (choise == 3) {
			break;
		}
		else {
			cout << "Vvedeno nevernoe chislo, poprobujte eshchyo raz\n";
		}
		choise = 0;
	}	
}