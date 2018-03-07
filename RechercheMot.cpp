#include <iostream>
#include <random>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	string mot = "programmation" ;
	string reponse = "_____________";
	string save;
	string echec = "__________";
	int a = 0, b=0;
	char lettre;
	while (reponse != mot && b < 11) {
		a = 0;
		cout << "Choisir une lettre : ";
		cin >> lettre;
		save = reponse;
		while (a < 14) {
			if (lettre == mot[a]) {
				reponse[a] = lettre;
			}
			a++;
		}
		if (save == reponse) {
			echec[b] = lettre;
			b++;
		}
		cout << "\n" << reponse;
		cout << "\nLettres essayees : ";
		a = 0;
		while (a < 11) {
			if (echec[a] != '_') {
				cout << echec[a] << " ";
			}
			a++;
		}
		cout << "\n";
		a = 0;
		while (a < 11) {
			if (a < b) {
				cout << 'X';
			}
			else {
				cout << 'O';
			}
			a++;
		}
		cout << "\n\n\n";
	}

	cout << "\n\n\n\n\n";
	system("PAUSE");
	return 0;
}