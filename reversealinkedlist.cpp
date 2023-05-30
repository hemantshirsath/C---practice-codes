#include<iostream>
using namespace std;
struct node {
int data;
struct node *next;
};
struct node *createnode(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    n->data=val;
    n->next=NULL;
    return n;
}
void traverse(struct node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
struct node *reverse(struct node *head)
{
    struct node *prev=NULL;
    struct node *current=head;
   
    while(current!=NULL)
    {
        struct node *temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
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
    traverse(head);
    cout<<"Reversed linked list is "<<endl;
    head=reverse(head);
    traverse(head);
    return 0;
}