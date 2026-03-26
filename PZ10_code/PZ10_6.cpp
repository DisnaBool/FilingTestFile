#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;
    int fact = 1;

    for(int i = 2; i <= N; i++)
        fact = fact * i;
    cout<<fact;


    return 0;
}