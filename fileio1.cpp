#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // opening file using counstructor and writing to it
    // ofstream out("hemant1.txt");  //write operation
    // string str="This is hemant bhai ";
    // out<<str;

    // opening file using constructor and reading it
    ifstream in("hemant1.txt");
    string st2;
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    
    
    return 0;
}