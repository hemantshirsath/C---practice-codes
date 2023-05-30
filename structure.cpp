#include<iostream>
#include<iomanip>
using namespace std;
struct node {
    string name;
    int rn;
    int marks;
};
int main()
{
    int n;
    cout<<"Enter number of students ";
    cin>>n;
    struct node sp[n];
    
    cout<<"Enter details ";
    for(int i=0;i<n;i++)
    {
        sp[i].rn=i+1;
        cout<<"For roll no "<<i+1<<endl;
        cout<<"Enter Name ";
        cin.ignore();
        getline(cin,sp[i].name);
        cout<<"Enter marks obtained ";
        cin>>sp[i].marks;
    }
    cout<<"\nDisplaying information "<<endl;
    cout<<"\nName "<<"          \t\t\trollno \t marks "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        cout<<i+1<<"."<<sp[i].name<<setw(15);
        cout<<"\t"<<sp[i].rn;
        cout<<"\t"<<sp[i].marks;
    }
    return 0;
}