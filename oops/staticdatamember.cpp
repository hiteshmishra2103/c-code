#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:

    void setData()
    {
        cout << "Enter the id of the employee: ";
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "this is employee number: " << count << endl;
    }

    static void count()
    {
        count++;
    }
};

int employee::count; // default value is 0

int main()
{
    employee a, b, c;
    a.setData();
    a.getData();

    b.setData();
    b.getData();

    c.setData();
    c.getData();
}