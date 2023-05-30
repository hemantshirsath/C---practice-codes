#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
};
struct node *createnode(int val)
{
    struct node *n=new struct node ();
    n->next=NULL;
    n->data=val;
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
struct node *reverse(struct node *head)
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
struct node *middle(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head->next;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int check(struct node *start,struct node *end)
{
    struct node *left=start;
    struct node *right=end;
    while(left!=NULL&&right!=NULL)
    {
        if(left->data!=right->data)
        {
            return 0;
        }
        left=left->next;
        right=right->next;
    }
    return 1;
}
int main()
{
    struct node *a=createnode('j');
    struct node *b=createnode('a');
    struct node *c=createnode('h');
    struct node *d=createnode('k');
    struct node *e=createnode('j');
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    struct node *mid=middle(a);
    struct node *rev=reverse(mid);
    // cout<<check(a,rev);
    if(check(a,rev)){
        printf("Linked list is pelindrome ");
    }
    else{
        printf("Linked list is not pelindrome ");
    }
    
    return 0;
}