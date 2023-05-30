// reverse a linked list using stack
#include<iostream>
#include<stack>
using namespace std;
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *createnode(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
}
void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void insert(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        cout<<"Overflow "<<endl;
    }
    else{
        if(head==NULL)
        {
            head=n;
            n->data=val;
            n->next=NULL;
        }
        else{
            n->data=val;
            n->next=head;
            head=n;
        }
    }
{
    stack<node *> st;
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        st.push(ptr);
        ptr=ptr->next;
    }
    struct node *revhead=st.top();
    st.pop();
    struct node *p=revhead->next;
    while(!st.empty())
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    display();
    return 0;
}