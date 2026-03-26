#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int z;
    cin >> z;
    switch(z) {
        case 1:cout << "Стой";break;
        case 2:cout << "Готовься";break;
        case 3:cout << "Иди";break;
    }

    return 0;
}
