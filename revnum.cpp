#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cout<<"Enter number which you want to reverse ";
    cin>>n;
    long long int ans=0;
    while(n>0)
    {
        int rem=n%10;
        ans=ans*10+rem;
        n=n/10;

        

    }
    cout<<"Reversed number is "<<ans;
    return 0;
}