#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}