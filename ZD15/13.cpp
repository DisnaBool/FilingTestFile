#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    
    int z;
    string p_z = "";
    cin >> z;
    
    while(z != 0) {
        p_z += (z % 10) + '0';
        z = z / 10;
    }
    
    cout << p_z;
    
    
    return 0;
}
