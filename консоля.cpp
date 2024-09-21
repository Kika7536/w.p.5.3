#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");


	int debt, pay;
	bool check = true;
	string name;

	cout << "Задане 3. Коллекторы." << endl << endl;
	cout << "-----------------------" << endl << endl;

	cout << "Введите свое имя: ";
	cin >> name;

	cout << "Введите сумму долга: ";
	cin >> debt;

	if (debt < 0) {
		check = false; 
		cout << "Ошибка";
	}
	else if (debt == 0) {
		cout << "Ну ладно, предаствим, что нулевой долг есть" << endl;
	}

	while (check) {

		cout << name << ", " << "Введите сумму, которой гасите долг: ";
		cin >> pay;

		if (pay < 0) {
			debt -= pay;
			cout << name << ", Зря вы себя в долговую яму закапываете, ой зря..." << endl;
			cout << "Сумма долга: " << debt << endl << endl;
		}
		else if (pay == 0) {
			cout << name << ", Почему не вносите платеж? Хотите, чтобы проценты набежали?" << endl;
			cout << "Сумма долга: " << debt << endl << endl;
		}
		else {
			debt -= pay;
			if (debt <= 0) {
				cout << "Вы погасили долг." << endl << "Остаток на счету: " << -debt << endl;

				break;
			}
			cout << "Вы внесли " << pay << " у.е. денег." << endl;
			cout << "Сумма долга: " << debt << endl << endl;
		}


	}



}