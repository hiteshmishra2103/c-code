//Properties of friend functions
// 1. Not in the scope of the class, not the part of class.
// 2. friend functions means that non members complex function is allowed to do anything
// with the private members of the classes or can access private objects of classes.
// 3. Since it is not in the scope of the class it can't be called from the object of that
// class. c1.sumcomplex(c2,c2)=> Invalid
// 4. Can be invoked without the help of any object.
// 5. Usually contains objects as arguments.  

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumcomplex(complex o1, complex o2);

    void printnumber(void)
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;

    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 3);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
}