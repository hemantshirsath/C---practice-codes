#include<iostream>
#include<string>
using namespace std;
int hexadecimaltodecimal(string n)
{
    int x=1;
    int ans=0;
    int s=n.length();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='1'&&n[i]<='9')
        {
            ans=ans+(x*(n[i]-'0'));
        }
        else if(n[i]>'A'&&n[i]<='F')
        {
            ans=ans+(x*(n[i]-'A'+10));
        }
        x=x*16;
    }
    return ans;
}
int main()
{
    string str;
    cout<<"Enter hexadecimal number ";
    cin>>str;
    int ans=hexadecimaltodecimal(str);
    cout<<"Equivalent decimal of the hexadecimal number is "<<ans<<endl;
    return 0;
}