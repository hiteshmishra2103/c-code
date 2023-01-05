#include <iostream>
using namespace std;

class shop
{
    int itemid[100], itemprice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
    
};

void
shop::setPrice()
{
    initcounter();
    cout << "Enter id of your item: " << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id: " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop s1;
    s1.setPrice();
    s1.displayPrice();
    return 0;
}