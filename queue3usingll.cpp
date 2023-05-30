#include<iostream>
using namespace std;
struct node{
   int data;
   struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
int isempty()
{
    if(f==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull()
{
    struct node *ptr=new struct node();
    if(ptr==NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int val)
{
    if(isfull())
    {
        cout<<"Queue empty cant enqueue ";
    }
    else
    {
        struct node *n=new struct node();
        n->data=val;
        if(f==NULL)
        {
            r=f=n;
        }
        else
        {
            r->next=n;
            r=n;
        }
    }
}
int dequeue()
{
    int val;
    struct node *ptr=f;
    if(isempty())
    {
        cout<<" Queue empty cant dequeue ";
    }
    else
    {
        val=ptr->data;
        f=f->next;
        free(ptr);
        

    }
    return val;
}
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    enqueue(6);
    traverse(f);
    return 0;
}