#include <iostream>
using namespace std;
int fact(int n){
int f=1;
for (int i = 1; i <=n; i++)
{
    f=f*i;
}

return f;
}
int main(){
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    for (int j =1; j < n-(i+1); j++)
    {
        cout<<" ";
    }
    for (int k = 0; k<=i; k++)
    {
        cout<<fact(i)/(fact(i-k)*fact(k))<<" ";
    }
    cout<<endl;
}
return 0;
}+