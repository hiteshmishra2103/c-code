#include <iostream>
using namespace std;
int prime(int a){
 for(int i=2; i<=a/2; i++){
     if(a/i==0){
         return 0;
     }
 }
 return 1;}
 int main(){
     int a=10;
     int b=20;
     for(int i=a; i<=b; i++){
         if(prime(i)){
             cout<<i;
         }
         
     }
     return 0;
     }
