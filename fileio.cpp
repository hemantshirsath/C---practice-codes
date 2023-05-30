#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("sample.txt");
    out<<"This is sample text file created by me  and i am very happy by working on file again ";
    out.close();
    fstream in("sample.txt");
     string  n;
     while(!in.eof())
     {
         getline(in,n);
         cout<<n;
     }

    return 0;
}