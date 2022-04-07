#include <iostream>
using namespace std;
reverse(int n){
  int sum=0, a;
  while(n>0){
    a=n%10;
    sum=sum*10+a;
    n=n/10;
  }
  return sum;
}
int dectobin(int a){
    int b;
    int sum=0;
    while (a>0)
    {
        b=a%2;
        sum=sum*10+b;
        a=a/2;
    }
    int l=reverse(sum);
    return l;   
}
int main(){
    int n;
    cin>>n;
    cout<<dectobin(n);
    return 0;
}