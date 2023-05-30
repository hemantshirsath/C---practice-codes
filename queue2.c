#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max];
int f=-1;
int r=-1;
void enqueue()
{
    if(r==max-1)
    {
        printf("\nQueue overflow ");
    }
    else{
        int item;
        printf("\nEnter element which you want to insert into the queue ");
        scanf("%d",&item);
        if(f==-1)
        {
            f=0;
        }
        r++;
        queue[r]=item;
        printf("\n%d inserted into the queue successfully ",item);
    }
}
void dequeue()
{
    int item;
    if(f==-1)
    {
        printf("\nQueue is empty ");

    }
    else{
        if(f==r)
        {
            item=queue[r];
            f=r=-1;
        }
        else{
            item=queue[f];
            f++;
        }
        printf("\n%d dequeued from the queue successfully ",item);
    }
}
void display()
{
    printf("\nDisplaying the queue \n");
    int i;
    for( i=f;i<=r;i++)
    {
        printf("%d ",queue[i]);
    }
}
int main()
{
    int ch;
    do{
        printf("\nEnter 1 for inserting element into the queue ");
        printf("\nEnter 2 for dequeuing element from the queue ");
        printf("\nEnter 3 for displaying the queue ");
        printf("\nEnter 4 for exit ");
        printf("\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nInvalid input ");
            break;
        }
    }while(ch!=4);
    return 0;
}