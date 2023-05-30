#include<iostream>
#include<stack>
using namespace std;
void addbottom(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return ;
    }
    int k=s.top();
    s.pop();
    addbottom(s,val);
    s.push(k);
}
void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return ;
    }
    int val=s.top();
    s.pop();
    reverse(s);
    addbottom(s,val);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}