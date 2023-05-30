#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *createnode(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;
}
void insertatbeginning(struct node **head,int val)
{
    if(head==NULL)
    {
        struct node *n=createnode(val);
        *head=n;
        
    }
    else{
        struct node *n=createnode(val);
        n->next=*head;
        (*head)->prev=n;
        *head=n;
    }
}
void insertatlast(struct node **head,int val)
{
    struct node *n=createnode(val);
    struct node *ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=n;
    n->prev=ptr;



}
void insertafterkey(struct node **head,int key)
{
    struct node *ptr=*head;
    while(ptr->data!=key&&ptr!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("Key not found in linked list ");
        exit(0);
    }
    int element;
    printf("Enter value you want to insert after key ");
    scanf("%d",&element);
    struct node *n=createnode(element);
    ptr->next=n;
    n->prev=ptr;
    n->next=ptr->next;
    free(ptr);
}
void deleteatbeginning(struct node **head)
{
    if(head==NULL)
    {
        printf("Previous node cant be NULL ");
    }
    else{
        struct node *ptr=*head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        free(ptr);

    }
}
void deleteatlast(struct node **head)
{
    struct node *ptr=*head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
}
void display(struct node *head)
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    // struct node *n=createnode(2);
    struct node *head=createnode(2);
    insertatlast(&head,4);
    insertatbeginning(&head,1);
    // deleteatlast(&head);s
    display(head);
    insertafterkey(&head,2);
    display(head);

    return 0;
}