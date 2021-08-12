#include<iostream>
using namespace std;

int main()
{
  float number1 = 6.2;
  float number2 = 7.3;

  float *fPtr;
  fPtr = &number1;
  
  cout<<*fPtr<<endl;
  number2 = *fPtr;

  cout<<number2<<endl;
  cout<<&number1<<endl;
  cout<<fPtr<<endl;


  return 0;
}