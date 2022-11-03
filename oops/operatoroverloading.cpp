// #include <iostream>
// using namespace std;
// class demo{
// int a;
// public:
//     int b;
//     void getdata(int a){
//         cout<<"Enter the value: ";
//         cin>>a;
//     }
//     void putdata(){
//         cout<<"The value is: ";
//         cout<<a;
//     }
// };

// demo operator+ (demo aa, demo bb){
//     demo cc;
//     cc.b=aa.b+bb.b;
//     return cc;
// }

// int main(){
//     demo aa, bb, cc;
//     aa.getdata();
//     bb.getdata();
//     cc=aa+bb;
//     aa.putdata();
//     bb.putdata();
//     cc.putdata();
// }

//

#include <iostream>
using namespace std;

class demo
{
    int x;

public:
    void getdata()
    {
        cout << "Enter the value: ";
        cin >> x;
    }
    friend void operator++(demo );
    void putdata()
    {
        cout << x;
    }
};

void operator++()
{
    = x + 1;
}

int main()
{
    demo aa;
    aa.getdata();
    aa.putdata();
    ++aa;
    cout << "the value after increment";
}