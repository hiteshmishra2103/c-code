#include <bits/stdc++.h>
using namespace std;
int main(){
    int c=5, m;
    cin>>m;
    int tch=m/c;
    int rap=tch;
    while (rap>=2)
    {
        tch+=rap/2;
        rap=rap-rap/2;
    }
    cout<<tch;
    return 0;
}