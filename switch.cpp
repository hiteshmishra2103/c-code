#include <iostream>
using namespace std;
int main()
{
    char button;
    cout<<"choose a button: ";
    cin>>button;
    switch (button)
    {
    case 'd':
        cout<<"daya"<<endl;
        break;
    case 'm':
        cout<<"madhu"<<endl;
        break;
    case 'n':
        cout<<"neeraj"<<endl;
        break;
    case 'h':
        cout<<"hitesh"<<endl;
        break;

    
    default:
    cout<<"i am still learning more!"<<endl;
        break;
    }
 return 0;
}