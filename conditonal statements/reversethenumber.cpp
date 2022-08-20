#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reversednumber=0;
    while (n>0)
    {
        int lastdigit=n%10;
        reversednumber=reversednumber*10 + lastdigit;
        n=n/10;

    }
    cout<<reversednumber;
      return 0;
}