#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    int c = 1;
    int a = 1;
    int b = 1;
    while(a <= n){
        int c1 = c;
        while(b <= n){
            cout << c1<< ' ';
            c1 += c;
            b++;
        }
        b = 1;
        c++;
        a++;
        cout << endl;}
    // Ваш код:


    return 0;
}