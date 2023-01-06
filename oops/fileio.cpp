// #include <iostream>
// #include <fstream>
// using namespace std;

// // useful streams for  working with files in cpp:

// // fstreambase
// // ifstream-->derived from fstreambase
// // ofstream-->derived from fstreambase

// // In order to work with files in cpp, you will have to open it. there are two ways of doing this:

// // 1) Using constructors
// // 2)Using the member function open() of the class

// int main()
// {
//     string st = "India sdsdsd";
//     //opening files using constructor
//     ofstream out("sample.txt");//write operation
//     out<<st<<endl;
//     //closing the file
//     out.close();
//     //opening files using constructor and reading it

//     string st2;
//     ifstream in("sample.txt");
//     getline(in,st2); //storing the file content to st2 string
//     cout<<st2;
//     //closing the file
//     in.close();
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

// // open() and eof() function for file I/O in cpp

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
//     ofstream out;
//     out.open("sample.txt");
//     out << "this is me!\n";
//     out << "this is me also!";

//     out.close();

//     ifstream in;
//     in.open("sample.txt");
//     string st;
//     while (in.eof() == 0)
//     {
//         getline(in, st);
//         cout << st << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main()
// {
//     ofstream out;
//     out.open("sample.txt");
//     out << "This is me!";
//     out.close();

//     ifstream in;
//     in.open("sample.txt");
//     string st;
//     // in>>st;
//     // cout<<st;

//     while (in.eof() == 0)
//     {
//         getline(in, st);
//         cout << st;
//     }
//     in.close();
//     return 0;
// }