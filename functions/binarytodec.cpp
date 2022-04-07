//Program to convert binary to decimal//
#include <iostream>
using namespace std;
int bintodec(int);
int main()
{
    int a;
    cin >> a;
    cout << bintodec(a);
    return 0;
}
int bintodec(int a){
    int sum=0;
    int x=1;
    while (a>0)
    {
        int r=a%10;
        sum=sum+r*x;
        x=x*2;
        a=a/10;
    }
    return sum;
}