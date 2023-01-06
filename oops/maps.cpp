#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string, int> marksmap;
    
    marksmap["king"]=100;
    marksmap["jack"]=12;
    marksmap["queen"]=90;
    marksmap["joker"]=99;

    map<string, int> :: iterator iter;

    for(iter=marksmap.begin(); iter!=marksmap.end(); iter++){
        cout<<(*iter).first<<" :"<<(*iter).second<<endl;
    }

    cout<<"size is : "<<marksmap.size()<<endl;
    cout<<"max size is : "<<marksmap.max_size()<<endl;

    return 0;
}