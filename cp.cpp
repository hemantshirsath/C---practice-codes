#include<iostream>
using namespace std;
struct node{
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
    struct node *n=new struct node();
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top,int val)
{
    struct  node *n=new struct node();
    n->data=val;
    n->next=NULL;
    if(isfull(top))
    {
        cout<<"Stack overflow ";
    }
    else
    {
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
        cout<<"Stack empty cant pop ";
    }
    else{
        x=ptr->data;
        top=ptr->next;
        free(ptr);
    }
    return x;
}
void traverse(struct node *top)
{
    while(top!=NULL)
    {
        cout<<top->data<<endl;
        top=top->next;
    }
}
int main()
{
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    pop(top);
    traverse(top);
    return 0;
}