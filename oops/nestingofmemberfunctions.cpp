#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
};


void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!=0 && s.at(i)!=1){
            cout<<"Incorrect binary format.";
            exit(0);
        }
    }
    
void binary :: read(void){
    cout<<"Enter a binary number."<<endl;
    cin>>s;
    chk_bin();

}
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();    
    // classes and objects OOPS
}