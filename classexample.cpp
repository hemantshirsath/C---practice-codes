#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter no of testcases ";
    cin>>t;
    string name,address;
    ofstream o("details.txt");
    o<<"Name "<<"\t"<<"Address "<<endl;
    while(t--)
    {
        cout<<"\nEnter name ";
        getline(cin,name);
        cin.ignore();
        
        cout<<"\nEnter address ";
        getline(cin,address);
        cin.ignore();
        o<<name<<"\t\t";
        o<<address<<endl;
     
    }
    return 0;
}