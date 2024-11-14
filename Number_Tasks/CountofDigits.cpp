#include <iostream>
using namespace std;


void countDigits(long long int num){
   int count = 0;

   while (num != 0) {
        num /= 10; 
        count++;    
    }

    cout << "The number of digits is: " << count << endl;
}
int main() {
    long long int num;  //Use long long int to handle large numbers upto 19 digits
    cout << "Enter a number: ";
    cin >> num;

    countDigits(num);

    return 0;
}
