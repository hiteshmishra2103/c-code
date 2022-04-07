#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1="nincompoop";
    s1.erase(4,3);
    cout<<s1<<endl;
    s1.insert(4,"omp");
    cout<<s1;
    return 0;
}