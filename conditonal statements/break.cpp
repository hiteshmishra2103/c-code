/*To check if number is prime or not by using break statement*/
#include <iostream>
using namespace std;
int main(){ 
  int n;
  cin>>n;
  for (int i = 2; i <n; i++)
  {
      if (n%i==0){
         cout<<"non prime";
         break;
      }
      
  }
  cout<<"prime";
  
  return 0;
}