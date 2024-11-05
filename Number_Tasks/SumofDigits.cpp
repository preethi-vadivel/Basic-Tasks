#include<iostream>

using namespace std;

void sumOfDigits(int num)
{
   int rem,sum=0;

   while (num>0){
        rem = num % 10;
        num = num / 10;
        sum += rem; 
    }
    
    cout<<"The sum of digits is:"<<sum;
}

int main()
{
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    sumOfDigits(num);

    return 0;
}