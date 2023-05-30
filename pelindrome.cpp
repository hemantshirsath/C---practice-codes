#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string ";
    cin>>s;
    int n=s.length();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        if(s[i]!=s[n-i-1])
        {
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        cout<<"String is pelindrome.";
    }
    else
    {
        cout<<"String is not pelindrome";
    }    
    
    return 0;
}