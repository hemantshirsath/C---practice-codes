#include<iostream>
using namespace std;
struct node{
    int size;
    int r,f;
    int *arr;
};
int isempty(struct node *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *q)
{
    if(((q->r)+1)%(q->size)==q->f)
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
        q->r= ((q->r)+1)%q->size;
        q->arr[q->r]=val;
    }
}
int dequeue(struct node *q)
{
    int val=-1;
    if(isempty(q))
    {
        cout<<"Queue empty cant dequeue ";
    }
    else{
        q->f=((q->f)+1)%q->size;
        val=q->arr[q->f];
    }
    return val;
}
void traverse(struct node *k)
{
    struct node *q=k;
    while(q->f!=q->r)
    {
        q->f=((q->f)+1)%q->size;
        cout<<q->arr[q->f]<<" ";
    }
}

int main()
{
    // q->r=q->f=0;
    struct node *q=new struct node ();
    q->size=5;
    q->r=q->f=0;
    q->arr=new int[q->size];
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    dequeue(q);
    enqueue(q,5);
    dequeue(q);
    enqueue(q,6);
   dequeue(q);
   dequeue(q);
   enqueue(q,7);
   enqueue(q,8);
    traverse(q);
    
    
    
    
    return 0;
}