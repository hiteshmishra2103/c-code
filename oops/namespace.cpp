#include <iostream>
using namespace std;
/* namespace allow us to group named entities
--it assignes */

namespace first_space{
    int x=20;
    void func(){
        cout<<"Inside first_ space"<<endl;
    }
    namespace second_space 
    int x=123;
    void func(){
        cout<<"Inside second_space"<<endl;
    }
    namespace third_space 
    int x=13;
    void func(){
        cout<<"Inside third_space"<<endl;
    }
    int main(){
        cout<<first_space::x<<endl;
        cout<<second_space::x<<endl;
    }
}

