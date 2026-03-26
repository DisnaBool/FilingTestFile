#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int a;
    int sum = 0;
    cin >> a;
    
    for(int i = 1; i <= a; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << sum;
    
    return 0;
}
