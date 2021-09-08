#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"enter the number of rows and columns you want to print rectangle";
    cin>>n1>>n2;
    for (int i = 0; i <=n1; i++)
    {
        for(int j=0; j<=n2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
    }