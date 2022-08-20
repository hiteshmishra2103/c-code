#include <bits/stdc++.h>
using namespace std;
void insertionsort(int n, int arr[]){
    for(int i=1; i<n; i++){
        int j=i-1;
        int key=arr[i];
        while (j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;       
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }
    
}
int main(){
    int n, m;
    cout<<"enter the lengh o irst array: ";
    cin>>n;
    cout<<"enter the lenght of second array: ";
    cin>>m;
    int a[n], b[m], c[m+n];
    cout<<"enter the elements of first array: ";
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of second array: ";
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i <m+n; i++)
    {
        if(i<n){
            c[i]=a[i];
        }
        else{
            c[i]=b[i];
        }
    }
    cout<<"Ist array after sorting: "<<insertionsort(n, a)<<endl;
    cout<<"IIst array after sorting: "<<insertionsort(m, b)<<endl;
    cout<<"Merged array after sorting: "<<insertionsort(m+n, c);
}
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int current=arr[i];
//         int j=i-1;
//         while (j>=0 && arr[j]>current)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=current;   
//     }
//     for(int i=0; i<n; i++){
//        printf("%d ", arr[i]);
//     }
//     return 0;
// }