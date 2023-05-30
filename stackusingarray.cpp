#include <iostream>
using namespace std;
struct node
{
    int size;
    int top;
    int *arr;
};
int isempty(struct node *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct node *s, int val)
{
    if (isfull(s))
    {
        cout << "stack overflow ";
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
int pop(struct node *s)
{
    int val;
    if (isempty(s))
    {
        cout << "stack underflow";
    }
    else
    {
        val = s->arr[s->top];
        s->top--;
    }
    return val;
}
void traverse(struct node *s,int pos)
{
    int arrind=s->top-pos;
cout<<s->arr[arrind]<<endl;
    
}
int main()
{
    struct node *s=(struct node *)malloc(sizeof(struct node));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    push(s,7);
    push(s,6);
    push(s,17);
    push(s,5);
    push(s,2);
    pop(s);
    pop(s);
    push(s,90);
    for(int i=0;i<=s->top;i++)
    {
        cout<<"Element at position "<<i+1<<" is ";
        traverse(s,i);
    }

    return 0;
}