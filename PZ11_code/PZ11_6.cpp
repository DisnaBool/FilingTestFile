#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    int z = n;
    int col = 0;

    // Ваш код:
    do{z = z / 10; col++;}while(z != 0);
    if(n != 0) cout<<col;else cout <<0;

    return 0;
}