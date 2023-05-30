#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream s("r.txt");
    string content;
    while(!s.eof())
    {
        getline(s,content);
        cout<<content;
    }
    return 0;
}