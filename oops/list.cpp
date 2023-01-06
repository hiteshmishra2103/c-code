#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); i < lst.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    list<int> list1;

    list<int>::iterator iter1;

    list1.push_back(223);
    list1.push_back(2);
    list1.push_back(3);

    list<int> list2;

    list<int>::iterator iter2;

    list2.push_back(2);
    list2.push_back(1121);
    list2.push_back(88);

    iter1 = list1.begin();

    list1.sort();

    display(list1);

    list1.pop_back();
    list1.push_back(12);
    list1.pop_front();
    list1.remove(12);

    list1.reverse();
    display(list1);
    list1.merge(list2);

    return 0;
}