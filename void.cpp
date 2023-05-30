#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
 int isempty(struct node *top)      //function for checking is stack empty 
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *top)     //checking stack is full or not 
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top,int val) //function for pushing value in the stack 
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        cout<<"Stack overflow ";
    }
    else{
        p->data=val;
        p->next=top;
        top=p;
    }
    return top;
}
int pop(struct node *ptr)
{
    int x=-1;
    if(isempty(top))
    {
        cout<<"Stack underflow ";
    }
    else{
        x=ptr->data;
        top=ptr->next;
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
    top=push(top,2);
    top=push(top,4);
    top=push(top,6);
    top=push(top,8);
    pop(top);
    traverse(top);
    return 0;
}