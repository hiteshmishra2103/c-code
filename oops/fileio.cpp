// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(){
//     string st="This is king!";

//     //opening files using constructor and writing to it
//     // ofstream out("sample.txt");
//     // out<<st;

//     //opening files using constructor and readin from it
//     string st2;//string for storing the file data to st2 string
//     ifstream in("sample.txt");
//     // in>>st2;////it will only read till it encounter first space or a newline.
//     getline(in, st2);
//     cout<<st2<<endl;

//     return 0;

// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     // Connecting our file with hout stream

//     ofstream kout("sample.txt");
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     kout << name; // writing to the file

//     kout.close();

//     ifstream kin("sample.txt");
//     string content;
//     getline(kin, content); // Extracting the file data and storing it in the content string
//     cout << "The content of this file is: " << content << endl;

//     kin.close();
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is me!";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st;
    // in>>st;
    // cout<<st;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st;
    }
    in.close();
    return 0;
}