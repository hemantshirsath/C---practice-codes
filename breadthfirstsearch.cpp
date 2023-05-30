#include<iostream>
using namespace std;
struct node {
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
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct node *q)
{
    int val;
    if(isfull(q))
    {
         cout<<"Queue empty cant dequeue ";
    }
    else
    {
        q->f++;
        val=q->arr[q->f];

    }
    return val;
}

   
    

int main()
{
    struct node *q=(struct node *)malloc(sizeof(struct node ));
    q->size=40;
    q->r=q->f=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    int node;
    int i=0;
    int visited[7]={0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},

    };
    cout<<i<<" ";
    visited[i]=1;
    enqueue(q,i);
    while(!isempty(q))
    {
        int node=dequeue(q);
        for(int j=0;j<7;j++)
        {
            if(a[node][j]==1&&visited[j]==0)
            {
                cout<<j<<" ";
                visited[j]=1;
                enqueue(q,j);
            }
        }
    }

    return 0;
}