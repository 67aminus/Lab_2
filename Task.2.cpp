/*Ввести скорость автомобиля, разрешённую скорость и признак движения в школьной зоне 0/1.
Если скорость или ограничение неположительные - ошибка.
Если превышения нет, штраф О. Иначе определить превышение. До 10 км/ч включительно штраф 20, от 11 до 30 — 50, свыше 30 — 100. 
В школьной зоне рассчитанный штраф удваивается.
Вывести величину превышения и штраф.*/
#include <iostream>

using namespace std;

int main() {
	double speed;
	int limit;
	bool isSchool;
	int fine;
	double difference;

	cout << "Введите скорость автомобиля: ";
	cin >> speed;
	cout << "Введите разрешенную скорость: ";
	cin >> limit;
	cout << "Введите признак движения в школьной зоне: ";
	cin >> isSchool;
	if (speed < 0 || limit < 0) cout << "Ошибка";
	else if (speed <= limit) fine = 0;
	else {
		difference = speed - limit;
		if (difference <= 10) fine = 20;
		else if (difference <= 30) fine = 50;
		else if (difference <= 30) fine = 100;
	}
	if (isSchool == 1) fine = 2 * fine;
	else fine = fine;
	cout << "Величина превышения: " << difference << "\nВеличина штрафа: " << fine;

	return 0;
}
