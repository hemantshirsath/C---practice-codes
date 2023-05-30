#include<iostream>
using namespace std;
struct node {
int data;
struct node *next;
};
struct node *top=NULL;
int isempty(struct node *top)
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *top)
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top,int val )
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    if(isfull(top))
    {
        cout<<"Stack overflow cant push element ";
    }
    else
    {
        n->data=val;
        n->next=top;
        top=n;
    }
    return top;
}
int pop(struct node *ptr)
{
    int x;
    if(isempty(ptr))
    {
        cout<<"Stack underflow cant pop ";
    }
    else
    {
        x=ptr->data;
        top=ptr->next;

    }
    return x;
}
void traverse(struct node *top)
{
    struct node *ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main()
{
    top=push(top,2);
    top=push(top,4);
    top=push(top,6);
    pop(top);
    // cout<<isempty(top);
    traverse(top);
    return 0;
}