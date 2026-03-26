#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    switch(n) {
        case 1:
            cout << "Один";
            break;
        case 2:
            cout << "Два";
            break;
        case 3:
            cout << "Три";
            break;
        default:
            cout << "Ошибка";
            break;
    }


    return 0;
}