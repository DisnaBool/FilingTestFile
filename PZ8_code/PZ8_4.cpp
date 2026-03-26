#include <iostream>

using namespace std;

int main() {
    int a, b; // Объявляем две переменные
    cin >> a >> b; // Считываем два числа сразу

    // Ваш код:
    if(a == b)
        cout << "Числа равны";
    else if (a > b)
        cout << "Большее число: " << a;
    else
        cout << "Большее число: " << b;


    return 0;
}