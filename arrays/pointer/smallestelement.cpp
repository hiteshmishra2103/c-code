#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int arr[n];
     int *small=arr;
     for (int i = 0; i <n; i++)
     {
         cin>>arr[i];
         if (*small>*(arr+i))
         {
             small=arr+i;
         }
         
     }
     cout<<*small;
     return 0;     
}