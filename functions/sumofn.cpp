#include<iostream>
using namespace std;
int sum(int n);
int main(){
    int a;
    cin>>a;
    cout<<"The sum of natural numbers upto "<<a<<" terms is: "<<sum(a);
    return 0;
}
int sum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}