#include<iostream>
#include<stack>
using namespace std;
int match(char a,char b)
{
    if(a=='('&&b==')')
    {
        return 1;
    }
    else if(a=='{'&&b=='}')
    {
        return 1;
    }
    else if(a=='['&&b==']')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int paramatch(string str )
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            s.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']') {
            if(s.empty())
            {
                return 0;
            }
            else{
                char top=s.top();
                if(match(top,ch))
                {
                    s.pop();
                }
                else{
                return 0;
                }
            }
        }
        
    }
    if(s.empty())
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s;
    cout<<"Enter expression ";
    cin>>s;
    if(paramatch(s))
    {
        cout<<"Paranthesis Matched ";
    }
    else{
        cout<<"Not matched ";
    }
    return 0;
}