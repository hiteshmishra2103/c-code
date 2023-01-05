#include <iostream>

using namespace std;

inline int product(int a, int b)
{
    // static int c=0;////this executes only once
    // c=c+1;//don't use inline functions for static variables
    return a * b*c;
}

int main()
{

    cout << "The product of a and b is: " << product(1, 3) << endl;
    cout << "The product of a and b is: " << product(1, 3) << endl;
    cout << "The product of a and b is: " << product(1, 3) << endl;
    cout << "The product of a and b is: " << product(1, 3) << endl;

    return 0;
}