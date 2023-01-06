#include <iostream>
using namespace std;

// copy constructor: A copy constructor is a
// member function that initializes an object using another object of the same class

//when no copy constructor is found, then compiler supplies it's own copy constructor to every class
class number
{
    int a;

public:
    number(){};

    number(int num)
    {
        a = num;
    }

    number(number &obj)//copy constructor syntax
    {
        cout<<"Copy constructor called!"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }
};

int main()
{
    number x(43), y, z,z2;
    x.display();

    // make an object with resembles exactly as x;

    number z1(x);
    z1.display();

    z2=x;//copy constructor not called in case of simple assigning an object to other 

    number z3=x;//copy constructor called
    return 0;
}