#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    for(int i = 1; i <= N;i++)
        cout << i << ' ';


    return 0;
}