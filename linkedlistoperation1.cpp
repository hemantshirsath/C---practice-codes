#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *createnode(int val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->prev=NULL;
    n->next=NULL;
    return n;
}
void display()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertatbeginning()
{
    int val;
    printf("\nEnter value which you want to insert at the beginning ");
    scanf("%d",&val);
    struct node *n=createnode(val);
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
}
void insertatlast()
{
    int val;
    printf("\nEnter value which you want to insert at the last ");
    scanf("%d",&val);
    struct node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *n=createnode(val);
    ptr->next=n;
    n->prev=ptr;

}
void deleteatbeginning()
{
    if(head==NULL)
    {
        printf("\nLinked list is empty ");

    }
    else{
        struct node *ptr=head;
        head=head->next;
        head->prev=NULL;
        free(ptr);
    }
}
void deleteatlast()
{
    struct node *ptr=head;
    struct node *p=head->next;
    if(head==NULL)
    {
        printf("\nLinked list is empty ");
    }
    else{
        while(p->next!=NULL)
        {
            ptr=ptr->next;
            p=p->next;
        }
        ptr->next=NULL;
        free(p);
    }
}
void insertaftervalue()
{
    int key;
    printf("\nEnter value after which you want to insert the element ");
    scanf("%d",&key);
    struct node *ptr=head;
    struct node *p=head->next;
    while(ptr->data!=key)
    {
        ptr=ptr->next;
        p=p->next;
    }
    int val;
    printf("\nEnter value which you want to insert ");
    scanf("%d",&val);
    struct node *n=createnode(val);
    ptr->next=n;
    n->prev=ptr;
    n->next=p;
}
void deleteaftervalue()
{
    int key;
    printf("\nEnter value after which you want to delete ");
    scanf("%d",&key);
    struct node *ptr=head;
    struct node *p=head->next;
    while(ptr->data!=key){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=p->next;
    p->next->prev=ptr;
    free(p);


}
void insertafterposition()
{
    int pos;
    printf("\nEnter position after which you want to insert value ");
    scanf("%d",&pos);
    int element;
    printf("\nEnter value which you want to insert ");
    scanf("%d",&element);
    struct node *ptr=head;
    struct node *p=head->next;
    int i=1;
    while(i<pos&&p!=NULL)
    {
        i++;
        ptr=ptr->next;  
        p=p->next;  
    }

    struct node *n=createnode(element);
    ptr->next=n;
    n->prev=ptr;
    n->next=p;
    p->prev=n;

}
void deleteafterposition(){
    int pos;
    printf("Enter position after which you want to delete ");
    scanf("%d",&pos);
    int i=1;
    struct node *ptr=head;
    struct node *p=head->next;
    while(i<pos)
    {
        ptr=ptr->next;
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next->prev=ptr;


}
int main()
{
    int ch;
    do{
        printf("\nEnter 1 for inserting node at beginning ");
        printf("\nEnter 2 for inserting node at last ");
        printf("\nEnter 3 for inserting node at specified position ");
        printf("\nEnter 4 for inserting node after specified value ");
        printf("\nEnter 5 for deleting node at beginning ");
        printf("\nEnter 6 for deleting node at last ");
        printf("\nEnter 7 for deleting node at specified position ");
        printf("\nEnter 8 for deleting node after specified node ");
        printf("\nEnter 9 for display the linked list ");
        printf("\nEnter 10 for exit ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertatbeginning();
            break;
            case 2:
            insertatlast();
            break;
            case 3:
            insertafterposition();
            break;
            case 4:
            insertaftervalue();
            break;
            case 5:
            deleteatbeginning();
            break;
            case 6:
            deleteatlast();
            break;
            case 7:
            deleteafterposition();
            break;
            case 8:
            deleteaftervalue();
            break;
            case 9:
            display();
            break;
            case 10:
            exit(0);
        }

    }while(ch!=10);
    return 0;
}