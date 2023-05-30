#include <iostream>
using namespace std;
struct node
{
    int size;
    int r;
    int f;
    int *arr;
};
int isempty(struct node *ptr)
{
    if (ptr->r == ptr->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *ptr)
{
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct node *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "Stack overflow cant enqueue";
    }
    else
    {
        ptr->r++;
        ptr->arr[ptr->r] = val;
    }
}
int dequeue(struct node *ptr)
{
    int x;
    if (isempty(ptr))
    {
        cout << "Stack underflow cant dequeue ";
    }
    else
    {
        ptr->f++;
        x = ptr->arr[ptr->f];
    }
    return x;
}
void traverse(struct node *q)
{
    for(int i=q->f+1;i<=q->r;i++)
    {
        cout<<q->arr[i]<<endl;
    }
}
// int traverse(struct node *q,int pos)
// {
//     int x=q->arr[pos+1];
//     return x;
// }
int main()
{
    struct node *q=(struct node *)malloc(sizeof(struct node ));
    q->size=9;
    q->r=q->f=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueue(q,2);
    enqueue(q,4);
    enqueue(q,6);
    enqueue(q,8);
    
    // enqueue(q,12);
    dequeue(q);
   traverse(q);
    
    return 0;
}