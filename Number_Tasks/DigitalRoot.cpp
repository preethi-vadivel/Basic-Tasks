#include <iostream>
using namespace std;

void digitalRoot(int num) {
    while (num >= 10) {  
        int sum = 0;
        
        
        while (num > 0) {
            sum += num % 10;  
            num /= 10;         
        }
        
        num = sum;  
    }
    
    cout << "The Digital Root is: " << num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    digitalRoot(num);

    return 0;
}
