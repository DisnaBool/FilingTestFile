#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    while (a > 0) {
        cout << a << endl;
        a--;
    }
    return 0;
}
