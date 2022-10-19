#include <iostream>
using namespace std;

class complex;

class calculator{
    public:
        int add(int a, int b){
                return (a+b);
        }
        int sumcomplex(complex o1, complex o2);
};

class complex
{
    int a, b;

friend int calculator :: sumcomplex(complex o1, complex o2);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber(void)
    {
        cout << "Your number is: " << a << "+" << b << "i" << endl;
    }
};

    int calculator :: sumcomplex(complex o1, complex o2){
            return ((o1.a+o2.a), (o1.b+o2.b));
        }


int main(){


}