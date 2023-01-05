#include <iostream>
using namespace std;

// forward declaration of class complex
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex);

};

class complex
{
    int a, b;
    friend int calculator::sumRealComplex(complex, complex);

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

int calculator::sumRealComplex(complex o1, complex o2){
    return (o1.a+o2.a);
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
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