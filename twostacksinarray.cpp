#include<iostream>
using namespace std;
class Twostack{
    public:
    int size;
    int top1;
    int top2;
    int *arr;
    Twostack(int size)
    {
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int[size];
    }
    void push1(int val)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=val;
        }
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }
    void push2(int val)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=val;
        }
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }
   int pop1()
    {
        int ans=-1;
        if(top1>=0)
        {
            ans=arr[top1];
            top1--;
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
        return ans;
    }
    int pop2()
    {
        int ans=-1;
        if(top2<size)
        {
            ans=arr[top2];
            top2++;
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
        return ans;
    }
    void peek1()
    {
        cout<<"\nTraversing stack 1 "<<endl;
        if(top1==-1)
        {
            cout<<"Stack underflow "<<endl;
        }
        else{
            for(int i=top1;i>=0;i--)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
    void peek2()
    {
        cout<<"\nTraversing stack 2 "<<endl;
        if(top2==size)
        {
            cout<<"Stack Underflow "<<endl;
        }
        else{
            for(int i=top2;i<size;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
    }
};
int main()
{
    int n;
    cout<<"Enter size of an stack ";
    cin>>n;
    Twostack t(n);
    t.push1(2);
    t.push1(4);
   t.push1(6);
   t.push2(1);
   t.push2(3);
    t.push2(5);
    t.pop1();
    t.pop2();
    t.peek1();
    t.peek2();

    return 0;
}