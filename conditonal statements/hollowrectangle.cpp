#include <iostream>
using namespace std;
//program to print a hollow rectangle pattern
int main(){
    int n1;
    cout<<"enter the number of rows to print - ";
    cin>>n1;
    int n2;
    cout<<"enter the number of columns to print - ";
    cin>>n2;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (i==1||i==n1||j==1||j==n2)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
    }