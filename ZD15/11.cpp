#include <iostream>
#include <random>
using namespace std;

int main() {
    // your code goes here
    setlocale(LC_ALL, "Russian");

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 100);
    int z = dist(gen);

    int s;
    cin >> s;

    while (z != s) {
        if (z > s)
            cout << "Больше" << endl;
        else
            cout << "Меньше" << endl;

        cin >> s;
    }

    cout << "Угадал";

    return 0;
}
