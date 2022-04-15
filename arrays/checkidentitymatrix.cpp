#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==1&&i==j)
            {
                continue;
            }
            else if(i!=j && arr[i][j]==0){
                continue;
            }
            else{
                cout<<"Matrix is not identity matrix";
                return 0;
            }
        }
        
    }
    cout<<"Matrix is identity";
    return 0;
}