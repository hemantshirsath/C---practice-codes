//program for circular queue 
#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;
void insert()
{
	int element;
	if((rear+1)%max==front){
	
		printf("\nQueue overflow ");
		
	}
	else 
	{
		if(front==-1&&rear==-1)
		{
			front=0;
		}
	 printf("\nEnter an element which you want to insert into the queue ");
	 scanf("%d",&element);
	 rear=(rear+1)%max;
	 queue[rear]=element;
	 printf("\n%d inserted into the queue successfully ",element);
	 

	}
	
}
void delete(){
	if(front==-1&&rear==-1){
		printf("\nQueue underflow ");
		
	}
	else {
		printf("\n%d dequeued from the queue successfully ",queue[front]);
		front=(front+1)%max;
	}
}
void display(){
int i,j;
if(front<rear)
{
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}
if(front>rear)
{
    for(i=0;i<max;i++)
    {
        printf("%d ",queue[i]);
    }
    for(j=0;j<(rear-j);j++)
    {
        printf("%d ",queue[j]);
    }
}
}
int main()
{
	int ch;
	do{
	
			printf("\nEnter 1 for inserting element into the queue ");
			printf("\nEnter 2 for removing element from the queue ");
			printf("\nEnter 3 for displaying queue ");
			printf("\nEnter 4 for exit ");
			printf("\nEnter your choice : ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					insert();
					break;
				case 2:
					delete();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(0);
					
			}
	}while(ch<=4);
}
