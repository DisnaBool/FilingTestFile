#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;

    int z = 1;

    while(z <= n) {
        if(z % 2 ==0) 
            cout << z << ' ';
        z++;
    }


    return 0;
}