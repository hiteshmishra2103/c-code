//-----------------------pointer to derived classes------------------

// #include <iostream>
// using namespace std;

// class base{

//     public:
//         int var1=1;
//         void display(){
//             cout<<"Displaying  base claass variable: "<<var1<<endl;
//         }

// };

// class derived:public base{
//     public:
//         int var2=23;
//             void display(){
//                 cout<<"displaying base class variable: "<<var1<<endl;
//                 cout<<"displaying derived class variable: "<<var2<<endl;
//             }

// };

// int main(){
//     base* baseclasspointer;
//     base objbase;
//     derived derivedobj;
//     baseclasspointer =&derivedobj;

    
//     baseclasspointer->display();
//     return 0;
// }

// //---------------Virtual functions in c++------------------------

// #include <iostream>
// using namespace std;

// class base{

//     public:
//         int var1=1;
//         virtual void display(){
//             cout<<"Displaying  base claass variable: "<<var1<<endl;
//         }

// };

// class derived:public base{
//     public:
//         int var2=23;
//             void display(){
//                 cout<<"displaying base class variable: "<<var1<<endl;
//                 cout<<"displaying derived class variable: "<<var2<<endl;
//             }

// };

// int main(){
//     base* baseclasspointer;
//     base objbase;
//     derived derivedobj;

//     baseclasspointer =&derivedobj;
//     baseclasspointer->display();
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

//// -----------------Abstract base class and pure virtual functions in c++---------------------------//

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
