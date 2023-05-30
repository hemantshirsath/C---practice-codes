#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *createnode(int val)
{
    struct node *n = createnode(val);
    n->prev = NULL;
    n->next = NULL;
    return n;
}
void insertatbeginning(struct node **head)
{
    int val;
    cout << "\nEnter value you want to insert at beginning ";
    cin >> val;
    struct node *n = createnode(val);
    n->next = *head;
    *head = n;
}
void insertatend(struct node **head)
{
    if (*head == NULL)
    {
        cout << "head cant be NULL ";
    }
    else
    {
        int val;
        cout << "\nEnter value you want to insert at the last ";
        cin >> val;
        struct node *ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        struct node *n = createnode(val);
        ptr->next = n;
        n->prev = ptr;
    }
}
void insertafterkey(struct node **head)
{

    if (*head == NULL)
    {
        cout << "Linked list is empty ";
    }
    else
    {
        int key;
        cout << "Enter value after which you want to insert ";
        cin>>key;
        struct node *ptr = *head;
        while (ptr->data != key)
        {
           ptr= ptr->next;
        }
        int val;
        cout<<"Enter value which you want to insert ";
        cin>>val;
        struct node *n=createnode(val);
        ptr->next=n;
        n->prev=ptr;
        n->next=ptr->next;
    }
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
int main()
{
   struct node *head=createnode(3);
   struct node *a=createnode(2);
   head->next=a;
  
   insertatend(&head);
   display(head);
    return 0;
}