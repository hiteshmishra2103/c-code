#include <iostream>
using namespace std;
int octaltodec(int);
int main()
{
    int a;
    cin >> a;
    cout <<octaltodec(a);
    return 0;
}
int octaltodec(int a){
    int sum=0;
    int x=1;
    while (a>0)
    {
        int r=a%10;
        sum=sum+r*x;
        x=x*8;
        a=a/10;
    }
    return sum;
}