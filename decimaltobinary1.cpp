#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter decimal number ";
    cin>>n;
    long long bin=0;
    int rem, i=1;
    while(n!=0)
    {
        rem=n%2;
        n/=2;
        bin=bin+rem*i;
        i*=10;


    }
    cout<<"Equivalent binary number is "<<bin;
    return 0;
}