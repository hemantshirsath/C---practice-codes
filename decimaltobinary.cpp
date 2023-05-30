#include<iostream>
#include<math.h>
#include<string>
using namespace std;
void binarytodecimal(int n)
{
    int rem,s=0,x=1;
    while(n>0)
    {
        rem=n%10;
        s=s+(rem*x);
        n=n/10;
        x*=2;
        
    }
    cout<<"Equivalent decimal number is "<<s;
}
void octaltodecimal(int n)
{
    int r,s=0,x=1;
    while(n>0)
    {
        r=n%10;
        s=s+(r*x);
        n=n/10;
        x*=8;

    }
    cout<<"Equivalent decimal number is "<<s;
}
int hexadecimaltodecimal(string n)
{
    int ans=0;
    int x=1;
    int s=n.length();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}
int main()
{
    string n;
    cout<<"Enter hexadecimal number which you want to convert to decimal ";
    cin>>n;
    cout<<"Equivalent decimal of hexadecimal is "<<hexadecimaltodecimal(n);
    return 0;
}