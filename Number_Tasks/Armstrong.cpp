#include <iostream>
#include <cmath>
using namespace std;


int armstrong(int num) {
    int rem, sum = 0 ;
    int originalNum = num;
    int len = 0;

    while(num!=0)
    {
        originalNum /= 10;
        len++;
    }

    while (originalNum != 0) {
        rem = originalNum % 10;              
        sum += pow(rem, len);           
        originalNum /= 10;               
    }
    return sum;                      
}

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    int result = armstrong(num);      

    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
