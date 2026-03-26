#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Ваш код:
    int sum = 0;
    int z;
    while(true){
        cin >> z;
        if(z == 0)
            break;
        sum += z;}
    cout << sum;


    return 0;
}