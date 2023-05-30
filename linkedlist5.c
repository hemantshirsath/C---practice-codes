// AIM: IMPLEMENTATION OF DOUBLY LINKED LIST
// NAME: HEMANT PADMAKAR SHIRSATH
// ROLL NO: 51
// SECTION : B
// BATCH : B2
#include<stdio.h>
#include<stdlib.h>

struct node {   
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;  //Creating head pointer and pointing to NULL as linked list is empty 
struct node *createnode(int val) //function for creating the node 
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data=val;
    n->prev=NULL;
    n->next=NULL;
    return n;
}
void display() //function for displaying the linked list 
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void insertatbeginning() //function for inserting the element at the beginning of linked list
{
    int val;
    printf("\nEnter value which you want to insert at the beginning ");
    scanf("%d",&val);
    struct node *n=createnode(val);
    if(head==NULL) //checking if linked list is empty 
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
    printf("\n%d added at the beginnning ",val);
}
void insertatlast()  //function for inserting element at the last of the linked list 
{
    int val;
    printf("\nEnter value which you want to insert at the last ");
    scanf("%d",&val);
    struct node *ptr=head;
    if(head==NULL)
    {
        struct node *n=createnode(val);
        n->next=head;
        head=n;
        return ;
    }
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    struct node *n=createnode(val);
    ptr->next=n;
    n->prev=ptr;
    printf("\n%d added at the last ",val);

}
void deleteatbeginning() //function for deleting the first element of the linked list 
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
    printf("\nfirst node deleted ");
} 
void deleteatlast()  //function for deleting the last element of the linked list 
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
    printf("\nLast node deleted ");
}
void insertaftervalue()  //function for inserting node after a specified value 
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
    printf("\n%d added after %d ",val,key);
}
void deleteaftervalue()  //function for deleting the node after specified value 
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
    printf("\nNode deleted successfully ");


}
void insertatposition() //function for inserting node at specified position 
{
    int pos;
    printf("\nEnter position at which you want to insert value ");
    scanf("%d",&pos);
    int element;
    printf("\nEnter value which you want to insert ");
    scanf("%d",&element);
    struct node *ptr=head;
    struct node *p=head->next;
    int i=1;
    while(i<pos-1&&p!=NULL)
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
    printf("\n%d inserted at position %d ",element,pos);

}
void deleteatposition(){  //function for deletion of node at specified position 
    int pos;
    printf("Enter position at which you want to delete ");
    scanf("%d",&pos);
    int i=1;
    struct node *ptr=head;
    struct node *p=head->next;
    while(i<pos-1)
    {
        ptr=ptr->next;
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next->prev=ptr;
    printf("\nNode deleted successfully ");

}
void search()
{
    int key;
    printf("\nEnter element which you want to search in the linked list ");
    scanf("%d",&key);
    struct node *ptr=head;
    int flag=0;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag)
    {
        printf("\nFound ");
    }
    else{
        printf("\nNot found ");
    }
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
        printf("\nEnter 10 to search element in the linked list ");
        printf("\nEnter 11 for exit ");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);//taking user choice as a input 
        switch(ch)
        {
            case 1:
            insertatbeginning();
            break;
            case 2:
            insertatlast();
            break;
            case 3:
            insertatposition();
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
            deleteatposition();
            break;
            case 8:
            deleteaftervalue();
            break;
            case 9:
            display();
            break;
            case 10:
            search();
            break;
            case 11:
            exit(0);
            break;
            default:
            printf("\nInvalid input ");
            break;
        }

    }while(ch!=11);
    return 0;
}