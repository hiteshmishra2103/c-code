#include <bits/stdc++.h>
using namespace std;
void maxi(int*a, int*b, int*c, int*maximum){
    *maximum=*a>*b?((*a>*c)?*a:*c):(*b>*c)?*b:*c;
}
int main(){
    int a, b, c, maximum;
    cin>>a>>b>>c;
    maximum=a;
    maxi(&a, &b, &c, &maximum);
    cout<<maximum;
}