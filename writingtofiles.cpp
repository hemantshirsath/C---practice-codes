#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream s("random.txt");
    string st;
    getline(cin,st);
    s<<st;
    s.close();
    return 0;
}