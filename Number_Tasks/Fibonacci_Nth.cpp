#include <iostream>
using namespace std;

void fibonacci(int num) {
    
    if (num <= 1)
        
        cout << "The " << num << "th Fibonacci number is: " << num << endl;
        return;
    
    int a = 0, b = 1, fib=1;
    
    for (int i = 2; i <= num; i++) {
        fib = a + b; 
        a = b;        
        b = fib;      
    }
    
    cout << "The " << num << "th Fibonacci number is: " << fib ;
}

int main() {
    int num;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> num;

    fibonacci(num);

    return 0;
}
