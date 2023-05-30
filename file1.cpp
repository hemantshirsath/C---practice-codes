#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("hemya.txt");
    out<<"welcome how are you";
    out.close();
    ifstream in("hemya.txt");
    string n;
    while(in.eof()==0)
    {
        getline(in,n);
        cout<<n;
    }
    return 0;
}