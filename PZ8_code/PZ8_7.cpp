#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:
    if(number > 0 && number % 2 == 0 && number < 100)
        cout << "Подходит";
    else
        cout << "Не подходит";


    return 0;
}