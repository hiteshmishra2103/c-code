#include <iostream>
use namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a is greatest";
        }
        else{cout<<"c is greatest";} 
    }
    else if (b>a)
    {
        if(b>c){
            cout<<"b is greatest";
        }
        if (b<c){
            cout<<"c is greatest";
        }
    }

    return 0;
}