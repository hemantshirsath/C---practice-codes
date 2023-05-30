#include<iostream>
#include<string>
using namespace std;
int checkbin(int n)
{
    int rem;
    while(n>0)
    {
        rem=n%10;
     if(rem*rem!=rem)
       {
           return 0;
       }
       
        n=n/10;
    }
    return 1;
}
int binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int rem=n%10;
        ans=ans+(x*rem);
        x=x*2;
        n=n/10;
    }
    return ans;
}
int octaltodecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int rem=n%10;
        ans=ans+(x*rem);
        x=x*8;
        n=n/10;
    }
    return ans;
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
            ans=ans+(x*(n[i]-'0'));
            
        }
        else if(n[i]>='A'&&n[i]<='F')
        {
            ans=ans+(x*(n[i]-'A'+10));
        }
        x=x*16;
    }
    return ans;
}
long long decimaltobinary(int n)
{
    long long ans=0;
    int rem=0;
    int i=1;
    while(n>0)
    {
        rem=n%2;
        ans=ans+(rem*i);
        i=i*10;
        n=n/2;

    }
    return ans;
}
long long decimaltooctal(int n)
{
    long long ans=0;
    int rem=0;
    int i=1;
    while(n>0)
    {
        rem=n%8;
        ans=ans+(rem*i);
        i=i*10;
        n=n/8;
    }
    return ans;
}
int main()
{
    // int num;
    // cout<<"Enter binary number ";
    // cin>>num;
    // if(checkbin(num))
    // {
    //     cout<<"It is binary ";
    // }
    // else
    // {
    //     cout<<"Not binary ";
    // }
    int n;
    cout<<"Enter 1 for binary to decimal "<<endl;
    cout<<"Enter 2 for octal to decimal "<<endl;
    cout<<"Enter 3 for hexadecimal to decimal "<<endl;
    cout<<"Enter 4 for decimal to binary "<<endl;
    cout<<"Enter 5 for decimal to octal "<<endl;
    cout<<"Enter your choice ";
    cin>>n;
    int num;
    string str;
    switch(n)
    {
        case 1: 
        cout<<"Enter binary number which you want to convert to decimal ";
        cin>>num;
        if(checkbin(num))
        cout<<"Equivalent decimal of binary is "<<binarytodecimal(num);
        else
        cout<<"Inapropriate number ";
        break;
        case 2:
        cout<<"Enter octal number of which you want equivalent decimal ";
        cin>>num;
        cout<<"Equivalent decimal is "<<octaltodecimal(num);
        break;
        case 3:
        cout<<"Enter hexadecimal number of which you want equivalent decimal number ";
        cin>>str;
        cout<<"Equivalent decimal is "<<hexadecimaltodecimal(str);
        break;
        case 4:
        cout<<"Enter number which you want to convert to binary ";
        cin>>num;
        cout<<"Equivalent binary is "<<decimaltobinary(num);
        break;
        case 5:
        cout<<"Enter number which you want to convert to octal ";
        cin>>num;
        cout<<"Equivalent octal is "<<decimaltooctal(num);
        break ;
        default:
        cout<<"Invalid input ";
        
    }
    return 0;
}