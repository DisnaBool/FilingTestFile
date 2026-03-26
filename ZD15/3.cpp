#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    float a, b;
    char op;
    cin >> a >> b >> op;
    switch(op){
        case '+':cout << a + b;break;
        case '-':cout << a - b;break;
        case '*':cout << a * b;break;
        case '/':if(b == 0) cout << "На 0 делить нельзя!"; else cout << a / b;break;
        default:cout << "Такой операции нет!";
    }
        
    return 0;
}
