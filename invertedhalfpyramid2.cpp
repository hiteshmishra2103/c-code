#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows to which you want to print:- ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}