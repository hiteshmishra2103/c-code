#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if (a>c){
        if(a>b){
            cout<<a;
        }
        else{
            cout<<b;
        }
    }
     else
    {
        if(b>a){
            cout<<b;
        }
        else{
            cout<<a;
        }
    }
    return 0;
}