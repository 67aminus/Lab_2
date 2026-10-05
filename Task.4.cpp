/* Ввести код тарифа такси 
Е — эконом, С — комфорт, В — бизнес, расстояние, признак ночного времени и признак праздничного дня 0/1.
Через switch задать посадку и цену за километр: Е — 2 и 0.8; С — 3 и 1.1; В — 5 и 1.8. 
Ночью итог увеличивается на 20%, в праздник — на 25%; 
если оба признака истинны, применить обе надбавки последовательно. 
Для тарифа Е итоговая цена не может быть меньше 4, для С — меньше 6, для В — меньше 10. 
Проверить входные данные и вывести итог.*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	char code;
	double distance;
	bool isNight;
	bool isHoliday;
	int seat;
	double kilometer;
	double fullPrice;
	string taxi;

	cout << "Введите код тарифа такси, расстояние, признак ночного времени, признак праздничного дня: \n";
	cin >> code >> distance >> isNight >> isHoliday;
	if (distance > 0) {
		switch (code) {
		case 'E': {
			seat = 2;
			kilometer = 0.8;
			taxi = "эконом";
			break;
		}
		case 'C': {
			seat = 3;
			kilometer = 1.1;
			taxi = "комфорт";
			break;
		}
		case 'B': {
			seat = 5;
			kilometer = 1.8;
			taxi = "бизнес";
			break;
		}
		default:
			cout << "Ошибка: неизвестный код тарифа такси \n";
			break;
		}
	
	fullPrice = seat + (distance * kilometer);

	if (isNight == 1) fullPrice = 1.2 * fullPrice;
	if (isHoliday == 1) fullPrice = 1.25 * fullPrice;

	if (code == 'E' && fullPrice < 4) fullPrice = 4;
	if (code == 'C' && fullPrice < 6) fullPrice = 6;
	if (code == 'B' && fullPrice < 10) fullPrice = 10;

	if (code == 'E' || code == 'C' || code == 'B')
	cout << "Выбранный тариф такси: " << taxi << "\nКонечная цена: " << fullPrice;
	}
	else cout << "Ошибка: расстояние должно быть положительным \n";

	return 0;
}