#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;

};
struct node *createnode(int val)
{
    struct node *n=new struct node ();
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
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    struct node *newhead=reverse(head->next);
    struct node *headnext=head->next;
    headnext->next=head;
    head->next=NULL;
    return newhead;
}
int main()
{
    struct node *head=createnode(2);
    struct node *a=createnode(3);
    struct node *b=createnode(4);
    struct node *c=createnode (5);
    struct node *d=createnode(6);
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