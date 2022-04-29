#include <bits/stdc++.h>
using namespace std;
int areap(int* a, int* p, int* b){
    a=3.14*(*b)*(*b);
    p=2*3.14*(*b);
}
int main(){
    int a=10;
    int area, per;
    areap(&area, &per, &a);
    printf("%d %d", area,per);
    return 0;
}