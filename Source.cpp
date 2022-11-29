#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int shag;
	string text, choise;
	cout << "SHifr Cezarya\n";
	while (true) {
		cout << "Vvedite:\n1 - zashifrovat' tekst\n2 - rasshifrovat' tekst\n3 - vyjti\nVypolnit': ";
		cin >> choise;
		if (choise == "1") {
			cout << "Vvedite shag: ";
			cin >> shag;
			cout << "Vvedite tekst dlya zashifrovki: ";
			cin.get();
			getline(cin, text);
			for (int i = 0; i < text.length(); i++) {
				if ((text[i] > 64) and (text[i] < 91)) {			//изменение кода английских символов
					text[i] += shag % 26;
					if ((text[i] < 65) or (text[i] > 90)) {
						text[i] -= 26;
						if ((text[i] < 65) or (text[i] > 90)) {
							text[i] += 52;
						}
					}
				}
				else if ((text[i] > 96) and (text[i] < 123)) {
					text[i] += shag % 26;
					if ((text[i] < 97) or (text[i] > 122)) {
						text[i] -= 26;
						if ((text[i] < 97) or (text[i] > 122)) {
							text[i] += 52;
						}
					}
				}
				else if ((text[i] > -65) and (text[i] < -32)) {		//изменение кода русских символов
					text[i] += shag % 32;
					if ((text[i] < -64) or (text[i] > -33)) {
						text[i] -= 32;
						if ((text[i] < -64) or (text[i] > -33)) {
							text[i] += 64;
						}
					}
				}
				else if ((text[i] > -33) and (text[i] < 0)) {
					text[i] += shag % 32;
					if ((text[i] < -32) or (text[i] > -1)) {
						text[i] -= 32;
						if ((text[i] < -32) or (text[i] > -1)) {
							text[i] += 64;
						}
					}
				}
			}
			cout << "Zashifrovannyj tekst: " << text << endl;
		}
		else if (choise == "2") {
			cout << "Vvedite shag: ";
			cin >> shag;
			cout << "Vvedite tekst dlya rasshifrovki: ";
			cin.get();
			getline(cin, text);
			for (int i = 0; i < text.length(); i++) {
				if ((text[i] > 64) and (text[i] < 91)) {			
					text[i] -= shag % 26;								//при расшифровке шаг вычитается
					if ((text[i] < 65) or (text[i] > 90)) {
						text[i] -= 26;
						if ((text[i] < 65) or (text[i] > 90)) {
							text[i] += 52;
						}
					}
				}
				else if ((text[i] > 96) and (text[i] < 123)) {
					text[i] -= shag % 26;
					if ((text[i] < 97) or (text[i] > 122)) {
						text[i] -= 26;
						if ((text[i] < 97) or (text[i] > 122)) {
							text[i] += 52;
						}
					}
				}
				else if ((text[i] > -65) and (text[i] < -32)) {		
					text[i] -= shag % 32;
					if ((text[i] < -64) or (text[i] > -33)) {
						text[i] -= 32;
						if ((text[i] < -64) or (text[i] > -33)) {
							text[i] += 64;
						}
					}
				}
				else if ((text[i] > -33) and (text[i] < 0)) {		
					text[i] -= shag % 32;
					if ((text[i] < -32) or (text[i] > -1)) {
						text[i] -= 32;
						if ((text[i] < -32) or (text[i] > -1)) {
							text[i] += 64;
						}
					}
				}
			}
			cout << "Rasshifrovannyj tekst: " << text << endl;
		}
		else if (choise == "3") {
			break;
		}
		else {
			cout << "Vvedeno nevernoe chislo, poprobujte eshchyo raz\n";
		}
		choise = "";
	}	
}