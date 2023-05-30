#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *arr;
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow "<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        int x=-1;
        if(top==-1)
        {
            cout<<"Stack Underflow ";
        }
        else{
            x=arr[top];
            top--;
        }
        return x;
    }
   int peek()
    {
        int x;
        if(top==-1)
        {
            cout<<"Stack Underflow ";
        }
        else{
            x=arr[top];
        }
        return x;
    }
    void traverse()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow "<<endl;
        }
        else{
            for(int i=top;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
    int isempty()
    {
        if(top==-1)
        {
            return 1;
        }
        return 0;
    }
};
int main()
{
    int n;
    cout<<"Enter size of stack ";
    cin>>n;
    Stack s(n);
    s.push(2);
    s.push(4);
    s.push(5);
    s.traverse();
    return 0;
}