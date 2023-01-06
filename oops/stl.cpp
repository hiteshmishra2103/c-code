///---------class templates with multiple parameters

// #include <iostream>
// using namespace std;

// template<class t1, class t2>

// class myclass{
//     public:
//         t1 data1;
//         t2 data2;
//         void display(){
//             cout<<this->data1<<" "<<this->data2<<endl;
//         }
// };

// int main(){

//     myclass <int, char> obj;
//     // myclass <int, float> obj;
//     obj.data1=2;
//     obj.data2=1.2;
//     obj.display();
    
//     return 0;
// }

// //----Templates with default data types in cpp------------

// #include <iostream>
// using namespace std;

// template<class t1=int, class t2=char>

// class myclass{
//     public:
//         t1 data1;
//         t2 data2;
//         void display(){
//             cout<<this->data1<<" "<<this->data2<<endl;
//         }
// };

// int main(){

//     myclass<> obj;
//     // myclass <int, float> obj;
//     obj.data1=2;
//     obj.data2='c';
//     obj.display();
    
//     return 0;
// }


#include <iostream>
using namespace std;

template <class t1, class t2>   

float funcavg(t1 a,  t2 b){
    return float(a+b)/2;
}

int main(){
    float a;
    a=funcavg(1,2);
    cout<<a<<endl;
}

// #include <iostream>
// using namespace std;

// //using template

// template <class T>

// class Vector
// {

// public:
//     T *arr;
//     int size;
//     Vector(int m)
//     {
//         size = m;
//         arr = new T[size];
//     }
//     T dotProduct(Vector &v)
//     {
//         T d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int
// main()
// {
//     // Vector <int>v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 3;
//     // v1.arr[2] = 1;

//     // Vector <int>v2(3);
//     // v2.arr[0] = 1;
//     // v2.arr[1] = 0;
//     // v2.arr[2] = 1;

//     // int a = v1.dotProduct(v2);

//     Vector <float>v1(3);
//     v1.arr[0] = 4.1;
//     v1.arr[1] = 3.87;
//     v1.arr[2] = 1;

//     Vector <float>v2(3);
//     v2.arr[0] = 1.67;
//     v2.arr[1] = 0;
//     v2.arr[2] = 1.67;

//     float a = v1.dotProduct(v2);

//     cout << a << endl;
//     return 0;
// }

//---------------------------Templates with multiple parameters----------//

// #include <iostream>
// using namespace std;

// /*syntax

// template <class T1, T2>

// class nameofclass{
//     //class body
// }

// */

// template <class T1, class T2>//T1 for int, T2 for char

// class myClass{
//     public:
//         T1 data1;
//         T2 data2;

//         myClass(T1 a, T2 b){
//             data1=a;
//             data2=b;
//         }
//         void display(){
//             cout<<this->data1<<" "<<this->data2<<endl;
//         }
// };

// int main()
// {
//     myClass<int ,char> Obj(12,'3');

//     Obj.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <class T1 = int, class T2 = float>

// class King
// {
//     public:
//         T1 a;
//         T2 b;

//     King(T1 x, T2 y){
//         a=x;
//         b=y;
//     }
//     void display(){
//         cout<<"The value of a is: "<<a<<endl;
//         cout<<"The value of b is: "<<b<<endl;
//     }
// };

// int main()
// {
//     King<char, float> k('c',4.3);
//     k.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <class T1, class T2>

// float funcAvg(T1 a, T2 b)
// {
//     T2 avg=(a+b)/2.0;
//     return avg;
// }

// int main()
// {
//     float a;
//     a=funcAvg<>(3,4.4);
//     cout<<a;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// template <class T>
// class King
// {
// public:
//     T data;
//     King(T a)
//     {
//         data = a;
//     }
// void display();

// };

// template <class T>
// void King<T>::display(){
//     cout<<data;
// }

// void func(int a){
//     cout<<"I am first func()"<<a<<endl;
// }

// template <class T>
// void func(T a){
// cout<<"I am templatised func()"<<a<<endl;
// }

// void func1(T a){
// cout<<"I am templatised func()"<<a<<endl;
// }

// int main()

// {
//     // King<float> k(4.7);
//     // cout<<k.data<<endl;
//     // k.display();

//     // King<char> h('c');
//     // cout<<h.data<<endl;
//     // h.display();

//     func(4);//exact match takes highest priority
//     func1('c');
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// template <class T>

// void display(vector<T> &v)
// {
//     cout << "Displaying this vector!" << endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// };
// int main()
// {
//     vector<int> vec1;
//     vector<char> vec2(4);
//     // vector<float> vec3(2);
//     // vector<double> v(vec2);//4-element double vector from vec2
//     vector<char> vec3(6,'c');

//     display(vec3);
//     cout<<"The size of vector is: "<<vec3.size()<<endl;
//     int element;
//     for (int i = 0; i < 4; i++)
//     {
//         cout << "Enter an element to add to this vector: " << endl;
//         cin >> element;
//         vec1.push_back(element);
//     }

//     // vec1.pop_back();

//     display(vec1);
//     vector<int>::iterator iter = vec1.begin();
//     vec1.insert(iter, 2, 566); // it is used to add an element before the specified
//     // iterator
//     display(vec1);
//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;

// void display(list<int> &list){
//     list<int>::iterator iter;
// }

// int main(){
//     list<int> l1;//empty list of 0 size
//     // list<int> l2(4);//empty list of size 4

//     l1.push_back(4);
//     l1.push_back(7);
//     l1.push_back(2);
//     l1.push_back(13);

//     list<int>::iterator iter;
//     iter=l1.begin();
//     cout<<*iter<<endl;
//     iter++;
//     cout<<*iter<<endl;

//     return 0;
// }
