#include <stdio.h>
#include <stdlib.h>
#define max 5
int f = -1;
int r = -1;
int queue[max];
void enqueue()
{
    if ( (r + 1) % max == f)
    {
        printf("\nQueue overflow ");
    }
    else
    {
        int item;
        printf("\nEnter element which you want to insert into the queue ");
        scanf("%d", &item);
        if (f == -1)
        {
            f = 0;
        }
        r = (r + 1) % max;
        queue[r] = item;
        printf("%d inserted into the queue successfully ", item);
    }
}
void dequeue()
{
    if (f == -1&&r==-1)
    {
        printf("\nQueue underflow ");
    }
    else
    {
        int item;
        item = queue[f];
        f = (f + 1) % max;
        printf("%d dequeued from the queue successfully ", item);
    }
}
void display()
{
    printf("\nDisplaying the queue \n");
    if (r> f)
    {
        int i;
        for (i = f; i <= r; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    if (r< f)
    {
        int i;
        for (i = f; i < max; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("\nEnter 1 for inserting element into the queue ");
        printf("\nEnter 2 for dequeuing element from the queue ");
        printf("\nEnter 3 for displaying the queue ");
        printf("\nEnter 4 for exit ");
        printf("\nEnter your choice ");
        scanf("%d", &ch);
        switch (ch)
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
    } while (ch != 4);
    return 0;
}