#include<iostream>
using namespace std;
class queue{
public:
int size;
int r,f;
int *arr;
int isempty(queue *);
int isfull(queue *);
void enqueue(queue *,int);
int dequeue(queue *);
void traverse(queue *);
};
int queue::isempty(queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int queue::isfull(queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void queue::enqueue(queue *q,int val)
{
    if(q->isfull(q))
    {
        cout<<"Queue full cant enqueue ";
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}
int queue::dequeue(queue *q)
{
    int x;
    if(q->isempty(q))
    {
        cout<<"Queue empty cant dequeue ";
    }
    else{
        q->f++;
        x=q->arr[q->f];
    }
    return x;
}
void queue::traverse(queue *q)
{
    for(int i=q->f+1;i<=q->r;i++)
    {
        cout<<q->arr[i]<<endl;
    }
   
}
int main()
{
    queue *q=(queue *)malloc(sizeof(queue));
    q->size=10;
    q->r=q->f=-1;
    q->arr=(int *)malloc(q->size*sizeof(int ));
    q->enqueue(q,2);
   q->enqueue(q,4);
   q->enqueue(q,6);
   q->dequeue(q);
   q->enqueue(q,8);
   q->dequeue(q);
   
   q->traverse(q);
    return 0;
}