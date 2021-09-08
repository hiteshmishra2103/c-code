#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "enter the numbers on which you want to perform operations";
    cin >> a >> b;
    char op;
    cout <<"type the operator you want to perform";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '%':
        cout << a % b;
        break;
    case '/':
        cout << a / b;
        break;

        default: /* default is used when user input value is not 
        matched to any of the above case*/
        cout<<"use operators + , -, *, /, %";
        break;
    }
    return 0;
}