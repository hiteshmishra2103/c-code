#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;//static variable are initialized to 0 by default. 
    public:
        void setdata(void){
            cout<<"Enter the id:"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number: "<< count <<endl;
        }
        static void getcount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};

int Employee :: count=1000; 

int main(){
    Employee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();

    Employee :: getcount();

    rohan.setdata();
    rohan.getdata();
    Employee :: getcount();
    
    lovish.setdata();
    lovish.getdata();
    Employee :: getcount();

    return 0;
}