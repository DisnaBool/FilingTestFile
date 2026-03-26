#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;;
    int z = n;
    z--;

    while(z >= 1){if(n % z != 0) z--;else break;}
    if(z == 1)
        cout << "Простое";
    else
        cout << "Не простое";


    return 0;
}