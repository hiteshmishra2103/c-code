#include <iostream>
#include <climits>
using namespace std;
int main(){
   int n;
   cin>>n;
   int min=INT_MAX;
   int arr[n];
   for (int i = 0; i <n; i++)
   {
       cin>>arr[i];
   }
   for (int i = 0; i <n; i++)
   {
       if(arr[i]<min){
           min=arr[i];
       }
   }
   cout<<min;
   return 0;
}