#include <iostream>
using namespace std;

//To find HCF two numbers
int hcf(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

//To find HCF three numbers
int hcfOfThree(int a, int b, int c) {
    int hcf_two = hcf(a, b);  
    return hcf(hcf_two ,  c);  
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int result = hcfOfThree(num1, num2, num3);
    cout << "The HCF of " << num1 << ", " << num2 << ", and " << num3 << " is: " << result << endl;

    return 0;
}
