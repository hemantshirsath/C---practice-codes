#include<iostream>
#include<stack>
using namespace std;
string reverse(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    string ans="";
    while(!s.empty())
    {
        char ch=s.top();
        s.pop();
        ans.push_back(ch);

    }
    return ans;
}
bool ispelindrome(string str)
{
    string rev=reverse(str);
    if(rev==str)
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    cout<<"Enter string ";
    getline(cin,str);
    string rev=reverse(str);
    cout<<"Reversed string is "<<rev;
    if(ispelindrome(str))
    {
        cout<<"\nString is pelindrome ";
    }
    else{
        cout<<"\nString is not pelindrome ";
    }

    return 0;
}