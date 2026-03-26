#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    int fac = 1;

    // Ваш код:
    while(n != 0){
        fac *= n;
        n--;
    }
    cout<<fac;


    return 0;
}