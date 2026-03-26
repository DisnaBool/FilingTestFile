#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    switch(n){
        case 1:case 2:case 3:cout << "Зима";break;
        case 4:case 5:case 6:cout << "Весна";break;
        case 7:case 8:case 9:cout << "Лето";break;
        case 10:case 11:case 12:cout << "Осень";break;
        default:cout << "Ошибка";break;}

    return 0;
}