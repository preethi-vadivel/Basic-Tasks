#include<iostream>

using namespace std;

void checkPrime(int num)
{
    bool val=true;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"Not a prime";
            val = false;
        }
           break;
    }

    if(val)
    {
        cout<<"it's a prime";
    }
}
int main()
{
    int num;
    cout<<"Enter the number ";
    cin>>num;

    checkPrime(num);

    return 0;
}