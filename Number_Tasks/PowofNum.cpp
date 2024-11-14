#include<iostream>
#include<cmath>

using namespace std;

void findPower(int num,int power){
    int result;

    result = pow(num , power);

    cout << "The result of " << num << " raised to the power " << power << " is: " << result;
}

int main(){

    int num , power;
    cout<<"Enter the Number and power:";
    cin >> num >> power;

    findPower(num,power);

    return 0;
}