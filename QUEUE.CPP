#include <iostream>
using namespace std;
struct node
{
    int size;
    int r, f;
    int *arr;
};
int isempty(struct node *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct node *q,int val)
{
    if(isfull(q))
    {
        cout<<"queue full cant enqueue";
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct node *q)
{
    if(isempty(q))
    {
        cout<<"queue empty cant dequeue";
        return -1;
    }
    else
    {
        q->f++;
        int x=q->arr[q->f];
        return x;
    }
}
void traverse(struct node *q)
{
    
    while(q->f!=q->r)
    {
        cout<<q->arr[q->f+1]<<endl;
        q->f++;
    }

}
int main()
{
    struct node *q=(struct node *)malloc(sizeof(struct node));
    q->size=10;
    q->r=q->f=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueue(q,2);
    enqueue(q,5);
    enqueue(q,6);
    enqueue(q,8);
    enqueue(q,22);
    dequeue(q);
    traverse(q);
    // cout<<isempty(q);
    return 0;
}