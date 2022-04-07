#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Hitesh";
    string s1="hitesh";
    if(s.compare(s1)){//compare function return the value 0 when strings are equal
        cout<<"Strings are not equal.";
    }
    return 0;
}