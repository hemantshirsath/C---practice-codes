#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    int sum=0,k;
    while(n>0)
    {
        k=n%10;
        sum=sum*10+k;
        n=n/10;
    }
    cout<<"Reversed number is "<<sum;
    return 0;
}