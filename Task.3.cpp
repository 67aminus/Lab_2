/*Ввести код транспорта 
В — автобус, М — метро, Т — городской поезд и расстояние поездки. 
Через switch задать базовый тариф: В — 1.2 за поездку, М — 1.5, Т — 0.08 за километр, но для поезда минимальная цена 2.5.
Для неизвестного кода или неположительного расстояния вывести ошибку. 
Вывести вид транспорта и стоимость.*/

#include <iostream>
#include <string>
using namespace std;

int main2() {
	char type;
	double distance;
	double fullPrice;
	string transport;

	cout << "Введите код транспорта: \n";
	cin >> type;
	cout << "Введите расстояние поездки: \n";
	cin >> distance;
	if (distance > 0) {
		switch (type)
		{
		case 'A':
		{
			fullPrice = 1.2;
			transport = "автобус";
			break;
		}
		case 'M':
		{
			fullPrice = 1.5;
			transport = "метро";
			break;
		}
		case 'T': {
			if (distance > 31.25)
				fullPrice = 0.08 * distance;
			else fullPrice = 2.5;
			transport = "поезд";
			break;
		}
		default: 
			cout << "Ошибка: неизвестный вид танспорта";
			break;
		}
		if (type == 'A' || type == 'M' || type == 'T')
		cout << "Вид транспорта: " << transport << "\nЦена поездки: " << fullPrice;
	} else cout << "Ошибка: расстояние должно быть положительным";
	return 0;
}