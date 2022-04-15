#include <bits/stdc++.h>
using namespace std;
 int main(){
     int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int maxf=0, idx=0;
    for (int i = 0; i < n; i++)
    {
        int f=0;
        for (int j = 0; j <n; j++)
        {
            if(a[i]==a[j]){
                f++;
            }
            maxf=max(maxf,f);
            if(maxf==f){
                idx=i;
            }
        }
        cout<<"frequency of "<<a[i]<<": "<<f<<endl;
    }
    cout<<"Highest occuring elemen is "<<a[idx]<<" which occured "<<maxf<<" times.";
    return 0;
 }