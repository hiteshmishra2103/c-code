#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData();

    void getData()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
        cout << "Value of c is: " << c << endl;
    }
};

void employee::setData()
{
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of b: ";
    cin >> c;
}

int main()
{
    employee e1;
    e1.setData();
    e1.getData();
    return 0;
}