#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    int r;
    int sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        
    }
    cout<<"Sum of digits is "<<sum;
    return 0;
}