#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int a;
    int sum = 0;
    cin >> a;
    
    while (a != 0) {
        a = a / 10;
        sum++;
    }
    cout << sum;
    return 0;
}
