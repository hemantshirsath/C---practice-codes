#include<iostream>
#include<stack>
using namespace std;
bool solve(string str)
{
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='+'||ch=='-'||ch=='/'||ch=='*')
        {
            st.push(ch);
        }
        else{
            if(ch==')')
            {
                bool isred=true;
                while(st.top()!='(')
                {
                    char top=st.top();
                    if(top=='+'||top=='-'||top=='*'||top=='/')
                    {
                        isred=false;
                    }
                    st.pop();
                }
                st.pop();
                 if(isred)
            {
                return true;
            }
            }
            
           
        }
    }
    return false;
}
int main()
{
    string s ;
    cout<<"Enter expression ";
    cin>>s;
    if(solve(s))
    {
        cout<<"Equation contains redudantant brackets ";
    }
    else{
        cout<<"Equation does not contain any redudantant brackets ";
    }
    return 0;
}