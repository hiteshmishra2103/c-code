#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, m;
    cout<<"Enter the rows and column of the matrix";
    cin>>l>>m;
    int a[l][m];
    int b[m][l];
    cout << endl << "Enter elements of matrix 1: ";
    for(int i = 0; i < l; i++){
        for(int j = 0; j < m; j++)
        {
            cout << "a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    
    }
    for(int i=0; i<l; i++){
        for(int j=0; j<m; j++){
            b[i][j]=a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for(int j=0; j<l; j++){
            cout<<b[i][j]<<" ";
            if(j==l-1){
                cout<<endl;
            }
        }
    }
    
    }