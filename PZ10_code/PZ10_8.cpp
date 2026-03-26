#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int s = 1; s <= N; s++)
            cout << '*';
        cout << endl;
    }
            


    return 0;
}