/*. Ввести возраст пассажира и стоимость обычного билета. 
До 7 лет проезд бесплатный; от 7 до 17 лет оплачивается 50%; с 18 до 64 лет — полная стоимость; с 65 лет — 60% обычной стоимости. 
Отрицательные данные считать ошибкой. Вывести возрастную категорию и цену билета. */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   
    int age;
    string category;
    double price;
    double finalPrice;
    cout << "Введите возраст пассажира: \n";
    cin >> age;
    if (age >= 0) {
        cout << "Введите цену обычного билета: \n";
        cin >> price;
        if (price >= 0) {
            if (age < 7) { finalPrice = 0; 
             category = "ребенок";
            }
            else if (age < 17) { finalPrice = price / 2; 
             category ="подросток";
            }
            else if (age < 65) {
                finalPrice = price;
                 category = "взрослый";
            }
            else { finalPrice = (price * 3) / 5;
             category = "пожилой";
            }
            cout << "Возрастная категория: " << category << "\n";
            cout << "Конечная цена: " << finalPrice << "\n";


        }
        else cout << "Ошибка: цена не может быть отрицательной \n";
    }
    else cout << "Ошибка: возраст не может быть отрицательным \n";
    return 0;
}