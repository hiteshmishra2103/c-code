#include <bits/stdc++.h>
using namespace std;
//function prototype
void swap(int*, int*);
int main(){
int a=10, b=20;
swap(&a, &b);
cout<<"a= "<<a<<"b= "<<b;
return 0;
}
void swap(int* x)