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
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
struct node * push(struct node *top,int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(isfull(ptr))
    {
        cout<<"Stack full cant push ";
    }
    else
    {
        n->data=val;
        n->next=NULL;
        top=n;

    }
    return top;
}

int main()
{
    
    return 0;
}