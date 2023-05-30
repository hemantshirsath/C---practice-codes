#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *arr;
    int isempty(stack *);
    int isfull(stack *);
    void push(stack *,int);
    int pop(stack *);
    int  traverse(stack *,int);


};
int stack :: isempty(stack *sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    return 0;
}
int stack::isfull(stack *sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    return 0;
}
void stack::push(stack *sp,int val)
{
    if(sp->isfull(sp))
    {
        cout<<"Stack overflow cant push ";
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
int stack::pop(stack *sp)
{
    int x;
    if(sp->isempty(sp))
    {
        cout<<"Stack underflow cant pop ";
    }
    else
    {
        x=sp->arr[sp->top];
        sp->top--;


    }
    return x;
}
int stack:: traverse(stack *sp,int ind)
{
  int index=sp->top-ind;
  int x=sp->arr[index];
  return x;
}
int main()
{
    stack *sp=(stack *)malloc(sizeof(stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    sp->push(sp,2);
   sp->push(sp,4);
   sp->push(sp,6);
   sp->pop(sp);
   for(int i=0;i<=sp->top;i++)
   {
       cout<<sp->traverse(sp,i)<<endl;
   }
    return 0;
}