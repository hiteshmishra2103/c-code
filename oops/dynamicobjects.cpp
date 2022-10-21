#include <iostream>
using namespace std; 

class bankdeposit{
    int principal; 
    int interest;
    float interestrate;
    float returnvalue;

    public:
        bankdeposit(){};
        bankdeposit(int p, int y, float r);
        bankdeposit(int p, int y, int r);
};

bankdeposit :: bankdeposit(int p, int y, float r){
principal=p;
years=y;
interestRate=r;
returnvalue=principal;
for (int i = 0; i < y; i++)
{
    returnvalue=returnvalue*(1+r);
}

}
bankdeposit :: bankdeposit(int p, int y, int r){
principal=p;
years=y;
interestRate=float(r)/100;
returnvalue=principal;
for (int i = 0; i < y; i++)
{
    returnvalue=returnvalue*(1+r);
}

}