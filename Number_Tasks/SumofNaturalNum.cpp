#include <iostream>

using namespace std;

void naturalNumber(int num){

    int sum = 0;

    for(int i = 1; i <= num; i++) {
       sum += i;
   }

   cout << "Sum of natural numbers up to " << num << " is: " << sum << endl;
}

int main() {
   int sum = 0, num;

   cout << "Enter a positive integer: ";
   cin >> num;

   naturalNumber(num);

   return 0;
}
