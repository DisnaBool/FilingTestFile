#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char op;
    int a, b;
    cin >> op >> a >> b;

    // Ваш код:
    switch(op){
        case '+':cout<<a+b;break;
        case '-':cout<<a-b;break;
        case '*':cout<<a*b;break;
        case '/':if(b == 0)cout<<"Деление на ноль";else cout<<a/b;break;
        default:cout<<"Ошибка";break;}

    return 0;
}