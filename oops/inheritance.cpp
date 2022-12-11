// #include <iostream>
// #include <cmath>
// using namespace std;

// class simpleCalc
// {
//     int a, b;

// public:
//     void getDataSimple()
//     {
//         cout << "Enter the value of a: " << endl;
//         cin >> a;
//         cout << "Enter the value of b: " << endl;
//         cin >> b;
//     }
//     void performOperationsSimple()
//     {
//         cout << "The value of a+b is: " << a + b << endl;
//         cout << "The value of a-b is: " << a - b << endl;
//         cout << "The value of a*b is: " << a * b << endl;
//         cout << "The value of a/b is: " << a / b << endl;
//     }
// };

// class ScientificCalc
// {
//     int a;

// public:
//     void getDataScientific()
//     {
//         cout << "Enter the value of a: " << endl;
//         cin >> a;
//     }
//     void performOperationsScientific()
//     {
//         cout << "The value of cos(a) is: " << cos(a) << endl;
//         cout << "The value of sin(a) is: " << sin(a) << endl;
//         cout << "The value of tan(a) is: " << tan(a) << endl;
//         cout << "The value of exp(a) is: " << exp(a) << endl;
//     }
// };

// class hybridCalc : public simpleCalc, public ScientificCalc
// {

// };

// int main()
// {
//     hybridCalc a;
//     a.getDataSimple();
//     a.performOperationsSimple();
//     a.getDataScientific();
//     a.performOperationsScientific();

// }

// #include <iostream>
// using namespace std;

// class base
// {
//     int data;

// public:
//     base(int i)
//     {
//         data = i;
//         cout << "Base class constructor called" << endl;
//     }
//     void printDatabase1()
//     {
//         cout << "The value of data is: " << data << endl;
//     }
// };

// class base2
// {
//     int data2;

// public:
//     base2(int i)
//     {
//         data2 = i;
//         cout << "Base2 class constructor called" << endl;
//     }
//     void printDatabase2()
//     {
//         cout << "The value of data is: " << data2 << endl;
//     }
// };

// class derived : public base, public base2
// {
//     int derived1, derived2;
//     public:
//         derived(int a, int b, int c, int d):base(a), base2(b){
//             derived1=c;
//             derived2=d;
//             cout<<"Derived constructor called!"<<endl;
//         };
//         void printDerived(){
//             cout<<"The value of derived1 is: "<<derived1<<endl;
//             cout<<"The value of derived2 is: "<<derived2<<endl;
//         }
// };

// int
// main()
// {

//     derived king(1,2,3,4);
//     king.printDatabase1();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class test
// {
//     int a;
//     int b;

// public:
//     // test(int i, int j) : a(i), b(i+j)
//     // test(int i, int j) : a(i), b(i)
//     // test(int i, int j):a(i), b(a*3)
//     // test (int i, int j):b(j), a(i+b) --> Red flag it will introduct bugs, because
//     //a will be initialised first
//     {
//         cout<<"constructor called: "<<endl;
//         cout<<"value of a is: "<<a<<endl;
//         cout<<"value of b is: "<<b<<endl;
//     }
// };

// int main(){
//     test t(3,4);
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int *a=new int(444);//444 is the value of an integer variable which is stored
//     //in heap
//     cout<<"The value at address a is: "<<*a<<endl;

//     int *arr=new int[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cout<<"Enter the value at array element index"<< i <<": ";
//         cin>>arr[i];
//     }
//     delete[] arr;
//     delete a;

// }

// #include <iostream>
// using namespace std;

// class complex
// {
//     int real, imaginary;

// public:
//     void getData()
//     {
//         cout << "The real part is: " << real << endl;
//         cout << "The imaginary part is: " << imaginary << endl;
//     }

//     void setData(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };

// int
// main()
// {
//     complex c1;
//     complex *ptr = &c1;
//     ptr->setData(12, 4);
//     ptr->getData();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
//     int a;

// public:
//     A& setData(int a){
//         this->a=a;
//         return this;
//     }

//     void getData(){
//         cout<<"The value of a is: "<<a<<endl;
//     }
// };

// int main(){
//     //this is a keyword which is a pointer which points to the objects which invokes the member function
//     A a;
//     a.setData(3);
//     a.getData();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class base
// {
// public:
//     int varbase;
//     void display()
//     {
//         cout << "Displaying base class variable varbase: " << varbase << endl;
//     }
// };

// class derived : public base
// {
// public:
//     int varderived;
//     void display()
//     {
//         cout << "Displaying base class variable varbase: " << varbase << endl;
//         cout << "Displaying derived class variable varderived: " << varderived << endl;
//     }
// };

// int main()
// {
//     base objbase;
//     base *basePointer = &objbase;
//     derived objderived;
//     basePointer = &objderived; // pointer base class pointer to derived class
//     basePointer->varbase = 34;
//     basePointer->display();

//     derived *derivedPointer;
//     derivedPointer = &objderived;
//     derivedPointer->varderived = 98;
//     derivedPointer->display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class base{
//     public:
//         int varbase=1;
//         virtual void display(){
//                 cout<<"Displaying base class variable base class: "<<varbase<<endl;
//         }
// };

// class derived:public base{
//     public:
//         int varderived=2;
//         void display(){
//             cout<<"Displaying base class variable varbase: "<<varbase<<endl;
//             cout<<"Displaying derived class varibale varderived: "<<varderived<<endl;
//         }
// };

// int main(){

// base* basepointer;
// base objbase;
// derived objderived;

// // basepointer =&objbase;
// basepointer =&objderived;
// basepointer->display();
// return 0;

// }
