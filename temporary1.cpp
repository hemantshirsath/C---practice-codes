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

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    addbottom(s,666);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}