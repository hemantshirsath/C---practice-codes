#include<iostream>
#include<stack>
using namespace std;
void add(stack<int> &s,int val,int count,int size )
{
    if(count==(size/2))
    {
        s.push(val);
        return ;
    }
    int k=s.top();
    s.pop();
    add(s,val,count+1,size);
    s.push(k);
}
void addmiddle(stack<int> &s,int val)
{
int count=0;
   int size= s.size();


add(s,val,count,size);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    addmiddle(s,455);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}