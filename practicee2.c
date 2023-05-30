#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *r=NULL;
struct node *f=NULL;
int isempty()
{
    if(f==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull()
{
    struct node *n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int val)
{
    
    if(isfull())
    {
        printf("\nQueue overflow ");
    }
    else{
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=NULL;
        if(f==NULL)
        {
            f=r=ptr;

        }
        else{
            r->next=ptr;
            r=ptr;
        }
    }
}
int dequeue()
{
    int ch;
    if(isempty()){
        printf("\nQueue underflow ");
    }
    else{
        struct node *ptr=f;
        ch=ptr->data;
        f=f->next;
        free(ptr);

    }
}
void display()
{
    struct node *ptr=f;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    display();
    // printf("%d",isempty());
    return 0;
}