#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *createnode(int val)
{
    struct node *ptr=new struct node();
    ptr->data=val;
    ptr->next=NULL;
    return ptr;
}
void traverse(struct node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
struct node* insertatbeginning(struct node *head,int val)
{
    struct node* ptr=createnode(val);
    ptr->next=head;
    head=ptr;
    return head;

}
struct node *insertatlast(struct node *head,int val)
{
    struct node *ptr=createnode(val);
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    return head;
}
struct node *deleteatbeginning(struct node *head)
{
    struct node *ptr=head;
    if(head==NULL)
    {
        cout<<"Linked list is empty ";
    }
    else{
    head=head->next;
    }
    free(ptr);
    return head;

}
struct node *deleteatlast(struct node *head)
{
    struct node *ptr=head;
    struct node *p=head->next;
    while(p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);
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
    // head=insertatbeginning(head,33);
    // head=insertatlast(head,44);
    // head=deleteatbeginning(head);
    // head=deleteatlast(head);
    traverse(head);
    
}