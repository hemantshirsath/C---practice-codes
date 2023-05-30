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
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top,int val)
{
    if(isfull(top))
    {
        cout<<"Stack overflow";
    }
    else{
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=val;
        ptr->next=top;
        top=ptr;
        
    }
    return top;
}
int pop(struct node *tp)
{
    
    if(isempty(tp))
    {
        cout<<"stack underflow";
        return -1;
    }
    else{
        
        top = tp->next;
        int x = tp->data;
        return x;
        
        }
        
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
    top=push(top,3);
    top=push(top,6);
    top=push(top,9);
    top=push(top,12);
     pop(top);
    traverse(top);
    
    // cout<<isempty(top);
    return 0;
}