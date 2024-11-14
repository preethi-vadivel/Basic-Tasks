#include<iostream>

using namespace std;

void product(int num)
{
   int rem , result = 1;

   while (num>0){
        rem = num % 10;
        num = num / 10;
        result *= rem; 
    }
    
    cout<<"The product of digits is:"<< result;
}

int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    product(num);

    return 0;
}