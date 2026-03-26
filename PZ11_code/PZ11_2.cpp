#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    int sum = 0;

    // Ваш код:
    while(n != 0){sum += n; n--;}
    cout<<sum;


    return 0;
}