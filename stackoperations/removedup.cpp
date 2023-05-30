#include<iostream>
using namespace std;
string removedup(string str)
{
    string ans;
    int index=0;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
int j;
        for( j=0;j<i;j++)
        {
            if(ch==str[j]){
                break;
            }
        }
        if(j==i)
        {
            ans=ans+ch;
        }
    }
    return ans;
}
int main()
{
    string str;
    cout<<"Enter string ";
    cin>>str;
    cout<<removedup(str);
    
    return 0;
}