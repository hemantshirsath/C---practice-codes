#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string ";
    cin>>str;
    int n=str.length();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"String is pelindrome ";
    }
    else{
        cout<<"String is not pelindrome ";
    }

    return 0;
}