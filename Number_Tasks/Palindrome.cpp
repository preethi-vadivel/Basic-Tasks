#include <iostream>

using namespace std;

void Palindrome(int num)
{
  int originalNum = num;
  int reversedNum = 0;
   while(num!=0){
    reversedNum = reversedNum * 10 + (num % 10);
    num = num/10;
  }
        
   if(originalNum == reversedNum){
    cout<<"Palindrome";
   }
   else{
    cout<<"Not Palindrome";
   }
}

int main()
{
  int num;
  cout << "Enter the Number: ";
  cin >> num;

  Palindrome(num);

  return 0;
}