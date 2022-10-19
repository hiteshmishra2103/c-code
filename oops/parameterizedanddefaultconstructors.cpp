//constructor should be declared in the public scope
//They can't return values and do not have return types.
//They are automatically invoked whenever the object is created
//We can't refer to their address.

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void printnumber(void)
    {
        cout << "Your number is: " << a << "+" << b << "i" <<endl;
    }
    // constructor is a special member function with same name as of class.
    // It is automatically invoked whenever an object is created
    complex(int, int); // constructor declaration
    //this is default constructor as it does not take parameters.
};

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{

    //implicit call
    complex c(3,4);
    c.printnumber();

    //explicit call
    complex b=complex (5,7);
    b.printnumber();
    return 0;
}