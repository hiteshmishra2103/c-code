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
    complex(void); // constructor declaration
    //this is default constructor as it does not take parameters.
};

complex ::complex(void)
{
    a = 0;
    b = 10;
}

int main()
{
    complex c;
    c.printnumber();
    return 0;
}