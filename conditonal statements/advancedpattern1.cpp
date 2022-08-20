#include <iostream>
using namespace std;
int main(){
    //to print a inverted trangle using numbers//
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}