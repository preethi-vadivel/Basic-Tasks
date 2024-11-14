#include <iostream>

using namespace std;

void squareRoot(int num) {
    double result = num / 2.0; 

    while ((result * result - num) > 0.00001) {
        result = (result + num / result) / 2.0;
    }
    
    cout << "The square root of " << num << " is: " << result << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    squareRoot(num);

    return 0;
}
