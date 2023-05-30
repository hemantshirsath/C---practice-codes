#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    int x=1,rem,ans=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans+rem*x;
        x=x*2;
        n=n/10;

    }
    cout<<endl<<"Equivalent decimal number is "<<ans;
    return 0;
}