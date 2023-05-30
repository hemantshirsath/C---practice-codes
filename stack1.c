#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top=-1;
void push()
{
    if(top==max-1)
    {
        printf("\nStack overflow ");
    }
    else{
        int item;
        printf("\nEnter element which you want to push into the stack ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("\n%d pushed into the stack successfully ",item);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow ");
    }
    else{
        int item;
        item=stack[top];
        top--;
        printf("\n%d popped from the stack successfully ",item);
    }
}
void display()
{
    printf("\nDisplaying stack \n");
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
int main()
{
    int ch;
    do{
        printf("\nEnter 1 for pushing the element into the stack ");
        printf("\nEnter 2 for popping the element ");
        printf("\nEnter 3 for displaying stack ");
        printf("\nEnter 4 for exit ");
        printf("\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
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