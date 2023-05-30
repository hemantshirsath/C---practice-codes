#include <iostream>
using namespace std;
struct node
{
    int size;
    int top;
    int *arr;
};

int isempty(struct node *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int traverse(struct node *ptr, int pos)
{
    int p = ptr->top - pos ;

    int x = ptr->arr[p];

    return x;
}
int isfull(struct node *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct node *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "Stack overflow cant push";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct node *ptr)
{
    int x;
    if (isempty(ptr))
    {
        cout << "Stack empty cant pop ";
    }
    else
    {
        x = ptr->arr[ptr->top];
        ptr->top--;
    }
    return x;
}
void stacktop(struct node *ptr)
{
    cout<<"Stacktop : "<<ptr->arr[ptr->top]<<endl;
}
void stackbottom(struct node *ptr)
{
    cout<<"Stackbottom :"<<ptr->arr[0];
}
int main()
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 4);
    push(s, 8);
    push(s, 12);
    push(s, 16);
    pop(s);
    for (int i = 0;i<=s->top;i++)
    {
        cout << traverse(s, i)<<endl;
    }
    stacktop(s);
    stackbottom(s);
    return 0;
}