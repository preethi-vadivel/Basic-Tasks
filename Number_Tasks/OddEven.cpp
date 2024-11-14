#include<iostream>

using namespace std;

void oddEven(int num){

  if(num%2==0){
    cout<<"The given number is Even";
  }
  else{
    cout<<"The given number is Odd";
  }

}


int main(){

  int num;

  cout<<"Enter the Number: ";
  cin>>num;

  oddEven(num);
  return 0;  
}