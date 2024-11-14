#include <iostream>
#include <cmath>
using namespace std;

void square(int num) {
    int rem, sum = 0;
    int originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;             
        sum += pow(rem, 2);   
        originalNum /= 10;       
    }

    cout << "The Square of the Digits is: " << sum << endl;
}

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    square(num);

    return 0;
}
