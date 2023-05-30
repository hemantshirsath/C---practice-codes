#include<iostream>
using namespace std;
struct node {
    int size;
    int r;
    int f;
    int *arr;
};
int isempty(struct node *q)
{
    if(q->r==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct node *q,int val)
{
    if(isfull(q))
    {
        cout<<"Queue full cant enqueue ";
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct node *q)
{
    int val;
    if(isempty(q))
    {
        cout<<"Queue empty cant dequeue ";
    }
    else{
        q->f++;
        val=q->arr[q->f];
    }
    return val;
}
void traverse(struct node *q)
{
    for(int i=q->f+1;i<=q->r;i++)
    {
        cout<<q->arr[i]<<" ";
    }
}
int main()
{
    struct node *q=new struct node ();
    q->size=50;
    q->r=q->f=-1;
    q->arr=new int[q->size];
    enqueue(q,2);
    enqueue(q,4);
    enqueue(q,6);
    enqueue(q,8);
    enqueue(q,10);
    dequeue(q);
    traverse(q);

    // cout<<isempty(q);
    return 0;
}