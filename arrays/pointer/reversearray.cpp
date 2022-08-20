#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    if (i==(n-1-i)||i>(n-1-i))
    {
        break;
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}