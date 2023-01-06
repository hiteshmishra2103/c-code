#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    vector <char> vec2(4);//4 element character vector

    int ele;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element to push: ";
        cin >> ele;
        vec1.push_back(ele);
    }
    
    vec1.pop_back();

    vector<int> ::iterator iter =vec1.begin();

    vec1.insert(iter, 343);
    vec1.insert(iter+1, 8,343);
  
    display(vec1);  
    return 0;
}