#include <iostream>
using namespace std;
struct node
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct node *q)
{
    if (q->f == q->r)
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
int  dequeue(struct node *q)
{
    int val;
    if (isempty(q))
    {
        cout << "Queue empty cant dequeue ";
        return -1;
    }
    else
    {
        q->f++;
        val = q->arr[q->f];
        return val;
    }
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
void traverse(struct node *q)
{
    for(int i=q->f+1;i<=q->r;i++){
        cout<<q->arr[i]<<endl;
    }
}
int main()
{
    struct node *q=(struct node *)malloc(sizeof(struct node ));
    q->size=10;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    enqueue(q,2);
    enqueue(q,4);
    enqueue(q,6);
    enqueue(q,8);
    enqueue(q,10);
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,89);
    enqueue(q,44);
    enqueue(q,88);
    // enqueue(q,67);
    
    traverse(q);
   
    return 0;
}