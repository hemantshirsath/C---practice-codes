#include <stdio.h>
#include <stdlib.h>
#define max 50
int stack[max];
int top = -1;
void push()
{
    int val;
    printf("\nEnter value which you want to push into the stack ");
    scanf("%d", &val);
    if (top == max - 1)
    {
        printf("\nStack overflow ");
    }
    else
    {
        top++;
        stack[top] = val;
        printf("\n%d pushed into the stack successfully ", val);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack underflow ");
    }
    else
    {
        int x = stack[top];
        top--;
        printf("\n%d popped from the stack successfully ", x);
    }
}
void display()
{
    printf("\ndisplaying stack \n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\nEnter 1 for pushing the element into the stack ");
        printf("\nEnter 2 for popping the element from the stack ");
        printf("\nEnter 3 for displaying the stack");
        printf("\nEnter 4 for exit ");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
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
    } while (ch != 4);
    return 0;
}