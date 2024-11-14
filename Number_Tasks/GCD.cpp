#include<iostream>
using namespace std;

void gcd(int num1, int num2) {

    while (num2 != 0) {
        int rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    cout << "The GCD is: " << num1 << endl;
    
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    gcd(num1, num2);
    
    return 0;
}
