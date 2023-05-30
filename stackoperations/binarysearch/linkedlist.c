#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *createnode(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    n->prev=NULL;
}
void display()
{
    printf("\n");
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertatbeginnning(){
    int item;
    printf("\nEnter item which you want to insert at the beginning ");
    scanf("%d",&item);
    struct node *n=createnode(item);
    if(head==NULL)
    {
        n->next=NULL;
        n->prev=NULL;
        head=n;
    }
    else{
        n->next=head;
        head->prev=n;
        head=n;
    }
    printf("\nNode added successfully at the beginning\n");

}
void insertatlast()
{
    int item;
    printf("\nEnter item which you want to insert at the last ");
    scanf("%d",&item);
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *n=createnode(item);
    ptr->next=n;
    n->prev=ptr;
    printf("\n%d added successfully in the last ",item);
}
void deleteatbeginnning()
{
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("\nPrevious node cant be NULL ");
    }
    else{
    head=head->next;
    head->prev=NULL;
    free(ptr);
    }
    printf("\nNode deleted successfully ");
}
void deleteatlast()
{
    struct node *ptr=head;
    struct node *p=head->next;
    while(p->next!=NULL){
        p=p->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    free(p);
    printf("\nNode deleted successfully ");

}
void insertafterposition( )

int main()
{
    struct node *a=createnode(2);
    head=a;
    struct node *b=createnode(4);
    head->next=b;
    b->prev=a;
    display(head);
    // insertatlast();
    deleteatlast();
    display();
    return 0;
}