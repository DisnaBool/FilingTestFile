#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int z;
    cin >> z;
    if(z % 2 == 0)
        cout << "Сегодня повезёт";
    else
        cout << "Лучше не рисковать";
        
    return 0;
}