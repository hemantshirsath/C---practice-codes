#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    cout<<"Enter number";
    cin>>n;
    int k;
    while(n>0)
    {
        k=n%10;
        cout<<k;
        n=n/10;
    }
    return 0;
}