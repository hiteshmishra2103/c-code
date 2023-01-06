//constructor should be declared in the public scope
//They can't return values and do not have return types.
//They are automatically invoked whenever the object is created
//We can't refer to their address.

#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(){
            a=11;
            b=2;
        }
        void get(){
            cout<<a<<endl<<b;
        }
};

int main(){
    complex c1;
    c1.get();
    return 0;
}