#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        int l=2;
        for(;j<=n+i-1;j++)
        {
            cout<<l++<<" ";
        }
        cout<<endl;
    }
    return 0;
}