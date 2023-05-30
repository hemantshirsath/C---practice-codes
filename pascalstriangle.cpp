#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;

    }
    return fact;
    
}
int main()
{
    int n;
    cout<<"Enter number of rows ";
    cin>>n;
    int ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            ans=fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}