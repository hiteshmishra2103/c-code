#include<iostream>
using namespace std;
int checkpgt(int, int, int);
int main(){
   
    int a, b, c;
    cin>>a>>b>>c;
    if(checkpgt(a,b,c)){
        cout<<"This is Pythagorean Triplet";
    }
    else{
        cout<<"This is not Pythagorean Triplet";
    }
}
int checkpgt(int l, int m, int n){
    if(l*l+m*m==n*n||n*n+l*l==m*m||m*m+n*n==l*l){
        return 1;
    }
    return 0;
}