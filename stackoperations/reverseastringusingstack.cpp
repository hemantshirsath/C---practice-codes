#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string ";
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        st.push(c);
        
    }
    string ans="";
    while(!empty(st))
    {
        ans.push_back(st.top());
        st.pop();
    }
    cout<<"Reversed string is "<<ans;
    return 0;
}