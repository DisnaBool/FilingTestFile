#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    float t;
    cin >> t;
    if(t < 0)
        cout << "Мороз";
    else if(t >= 0 && t <= 20)
        cout << "Прохладно";
    else if(t >= 21 && t <= 30)
        cout << "Тепло";
    else
        cout << "Жара";
        
    return 0;
}
