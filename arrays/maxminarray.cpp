#include <bits/stdc++.h>
using namespace std;
void maxmin(int a, int arr[]){
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for (int i = 0; i < a; i++)
    {
        maxno=max(arr[i],maxno);
        minno=min(arr[i], minno);
    }
    cout<<maxno<<" "<<minno;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    maxmin(n, arr);
    return 0;    
}