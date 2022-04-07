#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
     for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value you want to search:";
    cin>>k;
    int s=0, e=n-1, mid=s+e/2;
    while (s<=e)
    {
         if(k==arr[mid])
             cout<<mid;
         else if(k<arr[mid]){
             e=mid+1;
         }
         else{
             s=mid-1;
        }
    }
return 0;
}