// // //-----------------Inheritance first code------------------------

// // private members are never inherited

// #include <iostream>
// using namespace std;

// // base class
// class employee
// {
//     float salary;

// public:
//     int id;
//     employee(){};
//     employee(int inpid)
//     {
//         inpid = id;
//         salary = 2323;
//     }
// };

// class programmer : public employee
// {
// public:
//     programmer(int inpid)
//     {
//         id = inpid;
//     }

//     void setData(int inpid){
//         id = inpid;
//     }

//     int languageCode = 9;

//     void getData()
//     {
//         cout << "The id is: " << id << endl;
//     }
// };

// int main()
// {
//     programmer skillf(1);
//     skillf.getData();
//     return 0;
// }

////-----------------Inheritance second code(SINGLE INHERITANCE)------------------------

// #include <iostream>
// using namespace std;

// class base
// {
//     int data1;

// public:
//     int data2;
//     void setData()
//     {
//         data1 = 10;
//         data2 = 20;
//     }
//     int getData1()
//     {
//         return data1;
//     }
//     int getData2()
//     {
//         return data2;
//     }
// };

// class derived : public base
// {
//     int data3;

// public:
//     void process()
//     {
//         data3 = data2 * getData1();
//     }
//     void display()
//     {
//         cout << "Value of data 1 is: " << getData1()<<endl;
//         cout << "Value of data 2 is: " << data2<<endl;
//         cout << "Value of data 3 is: " << data3<<endl;
//     }
// };

// int main()
// {
//     derived der;
//     der.setData();
//     der.process();
//     der.display();
//     return 0;
// }

// ////-----------------Inheritance third code (PROTECTED ACCESS MODIFIER)------------------------

// #include <iostream>
// using namespace std;

// class base
// {

// protected:
//     int a;

// private:
//     int b;
// };

// class derived : protected base
// {

// };

// int main()
// {

//     return 0;
// }

// ////-----------------Inheritance third code (MULTILEVEL INHERITANCE)------------------------

// #include <iostream>
// using namespace std;

// class student
// {
// protected:
//     int roll;

// public:
//     void setroll(int r)
//     {
//         roll = r;
//     }
//     void getroll()
//     {
//         cout << "The roll number is: " << roll << endl;
//     }
// };

// class exam : public student
// {
// protected:
//     float maths;
//     float physics;

// public:
//     void setmarks(float m, float p)
//     {
//         maths = m;
//         physics = p;
//     }
//     void getmarks()
//     {

//         cout << "Maths: " << maths << endl;
//         cout << "Physics: " << physics << endl;
//     }
// };

// class result : public exam
// {

//     float percentage;

// public:
//     void display()
//     {
//         cout << "The percentage is: " << (maths + physics) / 2 << endl;
//     }
// };

// int
// main()
// {
//     result king;
//     king.setroll(1);
//     king.setmarks(100,33);
//     king.display();

//     return 0;
// }

// ////--------------------------------------Multiple inheritance

// #include <iostream>
// using namespace std;

// class base1
// {
// protected:
//     int base1int;

// public:
//     void set1(int a)
//     {
//         base1int = a;
//     }
// };

// class base2
// {
// protected:
//     int base2int;

// public:
//     void set2(int a)
//     {
//         base2int = a;
//     }
// };

// class derived : public base1, public base2
// {
// public:
//     void show()
//     {
//         cout << "The value of base 1 is: " << base1int << endl;
//         cout << "The value of base 2 is: " << base2int << endl;
//         cout << "The sum is: " << base1int + base2int << endl;
//     }
// };

// ////--------------------------------------Ambiguity resolution

// #include <iostream>
// using namespace std;

// class base1
// {
// public:
//     void greet()
//     {
//         cout << "How are you?" << endl;
//     }
// };

// class base2
// {
//     public:
//     void greet()
//     {
//         cout << "kaise ho?" << endl;
//     }
// };

// class derived : public base1, public base2
// {
//     int a;

// public:
//     void greet()
//     {
//        base1 :: greet();
//     }
// };

// class a{
//     public:
//         void say(){
//             cout<<"Hello"<<endl;
//         }
// };

// class b{
//     public:
//         void say(){
//             cout<<"Namaskar"<<endl;
//         }
// };

// class c: public a{
//     public:
//         void say(){
//             cout<<"Hola!"<<endl;
//         }
// };

// int main()
// {
//     derived d;
//     d.greet();
//     c ab;
//     ab.say();
//     return 0;
// }

// ////-------------------Virtual base class---------------------------

// #include <iostream>
// using namespace std;

// class student
// {
// protected:
//     int roll;

// public:
//     void setroll(int a)
//     {
//         roll = a;
//     }
//     void printroll()
//     {
//         cout << "Your roll: " << roll << endl;
//     }
// };

// class test : virtual public student
// {
// protected:
//     float maths, physics;

// public:
//     void setmarks(float m, float p)
//     {
//         maths = m;
//         physics = p;
//     }

//     void printmarks()
//     {
//         cout << "Your result: "
//              << "maths: " << maths << endl
//              << "physics: " << physics << endl;
//     }
// };

// class sports : virtual public student
// {
// protected:
//     float score;

// public:
//     void setscore(float sc)
//     {
//         score = sc;
//     }
//     void print()
//     {
//         cout << "Your pt score is: " << score << endl;
//     }
// };

// class result:public test, public sports{
//     private:
//         float total;
//     public:
//         void display(){
//             cout<<"total: "<<maths+physics+score<<endl;
//             printroll();
//             printmarks();
//             print();
//         }
// };

// ////------------------------CONSTRUCTORS IN DERIVED CLASS IN CPP--------------------------------

// #include <iostream>
// using namespace std;

// // order of constructors execution:👇

// class base1
// {
//     int data1;

// public:
//     base1(int i)
//     {
//         data1 = i;
//         cout << "Base1 class constructor called!" << endl;
//     }
//     void printData()
//     {
//         cout << "The value of data is: " << data1 << endl;
//     }
// };

// class base2
// {
//     int data2;

// public:
//     base2(int i)
//     {
//         data2 = i;
//         cout << "Base2 class constructor called!" << endl;
//     }
//     void printData()
//     {
//         cout << "The value of data is: " << data2 << endl;
//     }
// };

// class derived : public base1, public base2
// {
//     int derived1, derived2;

// public:
//     derived(int a, int b, int c, int d):base1(a), base2(b)
//     {
//         derived1=c;
//         derived2=d;
//         cout<<"Derived constructor called!"<<endl;
//     }
// };

// int
// main()
// {

// derived king(1,2,3,4);
//     return 0;
// }


//-------ARRAY OF OBJECTS USING POINTERs------------------------


// int
// main()
// {
//     derived king;
//     king.set1(2);
//     king.set2(2);
//     king.show();

//     return 0;
// }

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

