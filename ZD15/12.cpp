#include <iostream>
using namespace std;

int main() {
	// your code goes here
    setlocale(LC_ALL, "Russian");
    
    int z;
    bool prost = true;
    cin >> z;
    
    if(z == 1)
        prost = false;
        
    else {
        for(int k = z - 1; k > 1; k--) {
            if(z % k == 0) {
                prost = false; 
                break;
            }
                
        }
    }
    
    if(prost)
        cout << "Простое";
    else
        cout << "Не простое";
    
    
    return 0;
}
