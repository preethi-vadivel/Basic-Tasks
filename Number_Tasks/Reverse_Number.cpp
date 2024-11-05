#include<iostream>
using namespace std;

void reverse(int num)
{
    int sum = 0;
    while (num != 0) {
        sum = sum * 10 + (num % 10);
        num = num / 10;
    }
    cout << "The Reversed Number is: " << sum << endl;
}

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;

    reverse(num);
    return 0;
}
