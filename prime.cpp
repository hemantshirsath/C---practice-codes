#include<iostream>
using namespace std;
int isprime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        flag=0;
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else{
            flag=0;
        }
        
    }
    if(flag==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter number to which you want prime numbers ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            continue;
        }
        if(isprime(i))
        {
            cout<<i<<endl;
        }

    }
    return 0;
}