#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int rem=n&1;
        ans=ans+rem*2*i;
        i=i*2;
        n=n>>1;

    }
    cout<<"Equivalent decimal is "<<ans;
    return 0;
}