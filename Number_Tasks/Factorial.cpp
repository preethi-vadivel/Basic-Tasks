#include<iostream>

using namespace std;

void factorial(int num)
{
    int fact=1;

    for(int i=2 ; i<=num ; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << num << "is" << fact;
    
}

int main(){
    
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    factorial(num);

    return 0;
}