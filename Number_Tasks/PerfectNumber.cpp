#include <iostream>
using namespace std;


void perfectNum(int num) {
    int sum = 0;

    
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
        sum += i;  
        }
    }

   
    if (sum==num) {
        cout << "Number "<< num <<" is a perfect number";
    } else {
        cout << "Number "<< num <<" is not a perfect number";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    perfectNum(num);

    return 0;
}
