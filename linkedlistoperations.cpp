#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *createnode(int val){
    struct node *n=new struct node();
    n->data=val;
    n->next=NULL;
    return n;
}
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
struct node *insertaftervalue(struct node *head,int afvalue,int element)
{
    struct node *ptr=head;
    struct node *p=ptr->next;
    while(ptr->data!=afvalue)
    {
        ptr=ptr->next;
        p=p->next;
    }
    struct node *n=createnode(element);
    ptr->next=n;
    n->next=p;
    return head;
}
struct node *insertatbeginning(struct node *head,int element)
{
    struct node *n=new struct node ();
    n->data=element;
    n->next=head;
    head=n;
    return head;
}
struct node *insertatlast(struct node *head,int element)
{
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *n=new struct node();
    n->data=element;
    n->next=NULL;
    ptr->next=n;
    return head;
}
struct node *insertafternode(struct node *head,struct node *prevnode,int element )
{
    struct node *n=new struct node();
    n->data=element;
    n->next=(prevnode->next);
    prevnode->next=n;
    return head;
}
int main()
{
    struct node *head=createnode(1);
    struct node *a=createnode(2);
    struct node *b=createnode(3);
    struct node *c=createnode(4);
    struct node *d=createnode(5);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    traverse(head);
    head=insertafternode(head,b,45);
    cout<<"\nTraversal after insertion a node "<<endl;
    traverse(head);
    return 0;
}