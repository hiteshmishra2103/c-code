#include <iostream>
using namespace std;

namespace std1 {
    int x=1;
}

namespace std2{
    int x=121;
}

int x=11;

int main(){
    cout<<std1::x<<endl;
    cout<<std2::x<<endl;
    cout<<x<<endl;
    return 0;
}
