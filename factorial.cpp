#include<iostream>
using namespace std;
const int N=20;
long long f[N];
int main()
{
    int t;
    cout<<"Enter number of testcases ";
    cin>>t;
    f[0]=f[1]=1;
    for(int i=2;i<19;i++)
    {
        f[i]=i*f[i-1];
    }
    while(t--)
    {
        int fact=1;
        int x;
        cout<<"Enter number whose factorial do you want to find ";
        cin>>x;
        cout<<f[x]<<endl;
    }
    return 0;
}