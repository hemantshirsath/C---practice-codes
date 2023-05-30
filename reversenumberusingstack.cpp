#include<iostream>
using namespace std;
struct node {
    int size;
    int top;
    int *arr;
};
int isempty(struct node *sp)
{
    if(sp->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct node *sp,int val)
{
    if(isfull(sp))
    {
        cout<<"Stack full cant push ";
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;
        
    }
}
int pop(struct node *sp)
{
    int x;
    if(isempty(sp))
    {
        cout<<"Stack underflow cant pop";
    }
    else
    {
        x=sp->arr[sp->top];
        sp->top--;
    }
    return x;
}
int reverse(int n)
{
    struct node *sp=(struct node *)malloc(sizeof(struct node));
    sp->size=20;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    int reverse=0;
    while(n!=0)
    {
        int rem=n%10;
        push(sp,rem);
        n=n/10;
    }
    int i=1;
    while(!isempty(sp))
    {
        int k=pop(sp);
        reverse=reverse+k*i;
        i*=10;
    }
    return reverse;
}
int main()
{
    long int n;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Reversed number is "<<reverse(n);

    return 0;
}