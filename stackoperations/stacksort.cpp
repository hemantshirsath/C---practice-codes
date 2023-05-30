#include<iostream>
#include<stack>
using namespace std;
void addsort(stack<int> &s,int val)
{
    if(s.empty()||s.top()>val)
    {
        s.push(val);
        return;
    }
    int k=s.top();
    s.pop();
    addsort(s,val);
    s.push(k);
}
void sort(stack<int> &s)
{
    if(s.empty())
    {
        return ;
    }
    int val=s.top();
    s.pop();
    sort(s);
    addsort(s,val);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(4);
    sort(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}