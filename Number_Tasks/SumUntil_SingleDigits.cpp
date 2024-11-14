#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int originalNum = num;

    while (num >= 10) {
        int sum = 0;
        
        
        while (num > 0) {
            sum += num % 10;  
            num /= 10;      
        }
        
        num = sum;  
    }

    cout << "The Sum of "<< originalNum <<" Until Single digit is: "<< num << endl;
    return 0;
}
