#include <iostream>
using namespace std;

class A
{
    int a;//It is a class variable

public:
    void setData(int a)
    { // in cpp local variables are given higher priority than other types of variables.
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();
    return 0;
}