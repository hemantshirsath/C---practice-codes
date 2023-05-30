#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *createnode(int data)
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    n->data=data;
    n->next=NULL;
    return n;
}
void display(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
struct node * reverse(struct node *head)
{
    struct node *cur=head;
    struct node *prev=NULL;
    while(cur!=NULL)
    {
        struct node *temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        
    }
    return prev;
}
int main()
{
    struct node *head=createnode(2);
    struct node *a=createnode(4);
    struct node *b=createnode(6);
    struct node *c=createnode(8);
    struct node *d=createnode(10);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    display(head);
    cout<<"\nReversed linked list is "<<endl;
    head=reverse(head);
    display(head);
    return 0;
}