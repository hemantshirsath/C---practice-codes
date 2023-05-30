#include<iostream>
using namespace std;
struct node {
    int data;
    struct node *next;

};
struct node *createnode(int element )
{
    struct node *n=new struct node ();
    n->data=element;
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
struct node *deleteatbeginning(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *deleteatlast(struct node *head)
{
    struct node *ptr=head->next;
    struct node *p=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    p->next=NULL;
    free(ptr);
    return head;
}
struct node *deleteatindex(struct node *head,int index)
{
    struct node *ptr=head;
    struct node *p=head->next;
    int i=1;
    while(i<index-1)
    {
        ptr=ptr->next;
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    
    return head;
}
int main()
{
    struct node *head=createnode(1);
    struct node *a=createnode(2);
    struct node *b=createnode(3);
    struct node *c=createnode(4);
    struct node *d=createnode(5);
    struct node *e=createnode(6);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    traverse(head);
    head=deleteatindex(head,3);
    cout<<"\nLinked list after deletion of a node is "<<endl;
    traverse(head);
    return 0;
}