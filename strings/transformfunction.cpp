#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string s=str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl<<str;
    
    
}