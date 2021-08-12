#include<iostream>
using namespace std;

int main()
{
  float num1 = 0.0;
  float num2;

  cout<<"Enter a number: ";
  cin>>num2;

  float *fPtr1;
  float *fPtr2;

  fPtr1 = &num1;
  fPtr2 = &num2;

  num1 = *fPtr1 + 7.8;
  num2 = *fPtr2 - 14.2;

  cout<<*fPtr1<<endl;
  cout<<*fPtr2<<endl;
  cout<< num1+num2 <<endl;


  return 0;
}