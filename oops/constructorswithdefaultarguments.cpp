#include <iostream>
using namespace std;

class Simple
{
   int data1;
   int data2;

public:
Simple(){};
   Simple(int a, int b = 10)
   {
      data1 = a;
      data2 = b;
   }
   void printData()
   {
      cout << data1 << endl
           << data2;
   }
};

int main()
{
   Simple s(1, 4);
   s.printData();
   return 0;
}