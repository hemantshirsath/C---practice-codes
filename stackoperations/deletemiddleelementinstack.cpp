#include<iostream>
#include<stack>
using namespace std;
void remove(stack<int> &s,int size,int count)
{
    if(count==size/2)
    {
        s.pop();
        return ;
    }
    int k=s.top();
    s.pop();
    remove(s,size,count+1);
    s.push(k);
}
void deleteelement(stack<int> &s)
{
int size=s.size();
int count=0;
remove(s,size,count);

}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    deleteelement(s);
    cout<<"Stack after deleting middle element "<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}