#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value.
// Destructor deallocates the memory allocated by the constructors and objects

// When program ends or a block of code exits then for freeing the storage compiler
// automatically calls destructors

class num
{
    static int count;

public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called." << count << endl;
    };

    ~num()
    {
        cout << "This is the time when my destructor is called for object number: " << count << endl;
        count--;
    }
};

int num::count;

int main()
{
    cout << "Entering the main." << endl;
    cout << "We are inside our main function" << endl;
    cout << "Creating first object." << endl;
    num n1;

    {
        cout << "Entering this block." << endl;
        cout << "Creating second object." << endl;
        num n2;
        cout << "Creating third object." << endl;
        num n3;
        cout << "Exiting this block." << endl;
    }
 
    cout << "Back to main." << endl;
    return 0;
}