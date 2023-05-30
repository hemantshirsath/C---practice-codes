#include<iostream>
#include<stack>
using namespace std;
void stack(stack<int> &s)
{
    if(!s.empty())
    {
        return;
    }
    int val=s.top();
    s.pop();
    stack
}
void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return ;
    }
    int k=s.top();
    s.pop();
    reverse(s);
    sort(s,k);
}
int main()
{
     stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);

    return 0;
}