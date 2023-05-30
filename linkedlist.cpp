#include<iostream>
using namespace std;
struct node{
    int size;
    int top;
    int *arr;
};
int isempty(struct node *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct node *ptr,int val)
{
    if(isfull(ptr))
    {
        cout<<"stack full cant push";
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
int pop(struct node *ptr)
{
    if(isempty(ptr))
    {
        cout<<"stack underflow cant pop";
        return -1;
    }
    else
    {
        int x=ptr->arr[ptr->top];
        ptr->top--;
        return x;
    }
}
void traverse(struct node *ptr,int pos)
{
    struct node *p=ptr;
   int ind=p->top-pos;
    {
        cout<<p->arr[ind]<<endl;
    }
    

}
int main()
{

    struct node *s=(struct node *)malloc(sizeof(struct node));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(struct node));
    push(s,4);
    push(s,8);
    push(s,9);
    pop(s);
    // cout<<isempty(s);
    for(int i=0;i<=s->top;i++)
    {
        traverse(s,i);
    }
    return 0;
}