#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("hemant.txt");
    out<<"Hello hemant how are you ";
    out.close();
    fstream in("hemant.txt");
    string n;
    while(in.eof()==0)
    {
        getline(in,n);
        cout<<n;S
    }
    return 0;
}