#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number ";
    cin>>x;
    int s=0,r=0;
    while(x!=0)
    {
        r=x%10;
        s=s*10+r;
        x/=10;

    }
    cout<<"reverse number is "<<s;
    return 0;
}