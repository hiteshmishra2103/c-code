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

//------------------------------------------Virtual functions in c++-----------------------------//

// #include <iostream>
// #include <cstring>
// using namespace std;

// class cwh
// {
// protected:
//     string title;
//     float rating;

// public:
//     cwh(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display()
//     {
//     }
// };

// class cwhvideo : public cwh
// {
//     int videoLength;

// public:
//     cwhvideo(string s, float r, int vl) : cwh(s, r)
//     {
//         videoLength = vl;
//     }
//     void display()
//     {
//         cout << "Good video with title: " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "length of video is: " << videoLength << endl;
//     }
// };

// class cwhText : public cwh
// {
//     int words;

// public:
//     cwhText(string s, float r, int wc) : cwh(s, r)
//     {
//         words = wc;
//     }
//     void display()
//     {
//         cout << "Good article with title: " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "length of article is: " << words << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for cwh video
//     title = "Django tutorial";
//     vlen = 4.50;
//     rating = 4.5;
//     cwhvideo djvideo(title, rating, vlen);
//     djvideo.display();

//     cout << endl;
//     title = "Django tutorial text";
//     words = 500;
//     rating = 4.9;
//     cwhvideo djtext(title, rating, words);
//     djtext.display();

//     cwh *tuts[2];
//     tuts[0] = &djvideo;
//     tuts[1] = &djtext;

//     cout << endl;
//     tuts[0]->display();
//     cout << endl;
//     tuts[1]->display();
// }

// friend functions example

// #include <iostream>
// using namespace std;

// class king
// {
//     int a = 100;

// public:
//     void display()
//     {
//         cout << "This is king!" << endl;
//     }
//     friend void singham(king x);
// };

// void singham(king x)
// {
//     cout << "This is singham!" << endl;
//     cout << "value of a is: " << x.a << endl;
// }

// int main()
// {
//     king a;
//     a.display();
//     singham(a);
//     return 0;
// }

// //Member friend functions
// #include <iostream>
// using namespace std;

// //forward declaration
// class Complex;

// class Calculator
// {
//     int a, b;
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     int sumRealComplex(Complex, Complex);
// };

// class Complex
// {
//     int a, b;
//     //Individually declaring functions as private
//     friend int Calculator::sumRealComplex(Complex o1, Complex o2);

//     //Declaring the entire calculator class as friend
//     //this will allow all the functions of Calulator to access the private data of Complex class
//     friend class Calculator;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void printNumber()
//     {
//         cout << "Your number is:  " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator::sumRealComplex(Complex o1, Complex o2){
//     return (o1.a+o2.a);
// };

// int main(){
//     return 0;
// }

//-----------------Abstract base class and pure virtual functions in c++---------------------------//

// #include <iostream>
// #include <cstring>
// using namespace std;

// class cwh
// {
// protected:
//     string title;
//     float rating;

// public:
//     cwh(string s, float r)
//     {
//         title = s;
//         rating = r;
//     }
//     virtual void display()=0;//do-nothing function or pure virtual function
// };

// class cwhvideo : public cwh
// {
//     int videoLength;

// public:
//     cwhvideo(string s, float r, int vl) : cwh(s, r)
//     {
//         videoLength = vl;
//     }
//     void display()
//     {
//         cout << "Good video with title: " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "length of video is: " << videoLength << endl;
//     }
// };

// class cwhText : public cwh
// {
//     int words;

// public:
//     cwhText(string s, float r, int wc) : cwh(s, r)
//     {
//         words = wc;
//     }
//     void display()
//     {
//         cout << "Good article with title: " << title << endl;
//         cout << "Ratings: " << rating << endl;
//         cout << "length of article is: " << words << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     // for cwh video
//     title = "Django tutorial";
//     vlen = 4.50;
//     rating = 4.5;
//     cwhvideo djvideo(title, rating, vlen);
//     djvideo.display();

//     cout << endl;
//     title = "Django tutorial text";
//     words = 500;
//     rating = 4.9;
//     cwhText djtext(title, rating, words);
//     djtext.display();

//     cwh *tuts[2];
//     // tuts[0] = &djvideo;
//     tuts[1] = &djtext;

//     // cout << endl;
//     // tuts[0]->display();
//     cout << endl;
//     tuts[1]->display();

//     return 0;
// }
