 #include <bits/stdc++.h>
 using namespace std;
 int main(){
     char ans;
     string str="se34e3er";
     int maxcount=0;
     int count[128];
     for (int i = 0; i < 128; i++)
     {
         count[i]=0;
     }
     for (int i = 0; i < str.length(); i++)
     {
         int l=str[i];
         count[l]++;
         if (count[l]>maxcount){
         maxcount=max(maxcount, count[l]);
         ans=str[i];}
     }
     cout<<maxcount<<" times "<<ans;
 }