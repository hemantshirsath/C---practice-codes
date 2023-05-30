#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int r=-1;
int f=-1;
void enqueue()
{
    if((r+1)%max==f)
    {
        printf("\nQueue overflow ");
    }
    else{
        int val;
        printf("\nEnter value which you want to insert into the queue ");
        scanf("%d",&val);
        if(f==-1)
        {
            f=0;
        }
        r=(r+1)%max;
        queue[r]=val;
        printf("\n%d added into the queue successfully ",val);
    }
}
void dequeue()
{
    int val;
    if(f==-1)
    {
        printf("\nQueue underflow  ");
    }
    else{
     val=queue[f];
     f=(f+1)%max;
     printf("\n%d dequeued from the queue successfully ");
    }
}
void display()
{
    printf("\nDisplaying queue \n");
    if(f<r)
    {
        for(int i=f;i<=r;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    else{
        for(int i=f;i<max;i++)
        {
            printf("%d ",queue[i]);
        }
        for(int i=0;i<f;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    int ch;
    do{
        printf("\nEnter 1 for inserting element into the queue ");
        printf("\nEnter 2 for dequeuing element from the queue ");
        printf("\nEnter 3 for displaying queue ");
        printf("\nEnter 4 for exit ");
        printf("\nEnter your choice : ");
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