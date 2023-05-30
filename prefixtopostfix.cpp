#include <iostream>
#include <stack>
using namespace std;
int prec(char c)
{
    if (c == '*' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
string infixtopostfix(string str)
{
    stack<char> st;
        string result;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
    
        if ((ch >= 'a' && ch <= 'z') ||  (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            result = result + ch;
        }
        else if (ch == '(')
        {
            st.push('(');
        }
        else if (ch == ')')
        {
            while ( st.top() != '(')
            {
                result = result + st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(ch) <= prec(st.top()))
            {
                result = result + st.top();
                st.pop();
            }
             st.push(ch);
        }
       
    }
    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }
    return result;
}
int main()
{
string str;
cout<<"Enter equation ";
cin>>str;
string ans=infixtopostfix(str);
cout<<"result is "<<ans;
    return 0;
}