#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    int a;
    int max = 0;
    cin >> a;
    while(a != 0){
        if(a > max)
            max = a;
        cin >> a;
    }
    
    cout << max;
    
    return 0;
}
