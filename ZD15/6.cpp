#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    
    for(int i = 1; i <= 10; i++)
        cout << a << " * " << i << " = " << a * i << endl;
        
    return 0;
}
