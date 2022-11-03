#include <iostream>
using namespace std;

class Number
{
    int a, b = 10;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(&obj){
        a=obj.b;
    }

        void display()
    {
        cout << "The number is: " << a << endl;
    }
};

int main()
{
    Number x(100), y, z, a, b;
    x.display();
    y.display();
    z.display();
    a = Number(x);
    a.display();
}
