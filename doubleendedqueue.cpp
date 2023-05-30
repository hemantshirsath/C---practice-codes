#include <iostream>
using namespace std;
struct node
{
    int size;
    int r;
    int f;
    int *arr;
};
void traverse(struct node *q,int pos)
{
    int p=q->f+pos;
    cout<<q->arr[p]<<endl;
}
int isempty(struct node *q)
{
    if (q->f == -1)
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
void renqueue(struct node *q, int val)

{
    if (isfull(q))
    {
        cout << "queue full cant enqueue";
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
void fenqueue(struct node *q, int val)
{
    if (q->f == -1)
    {
        cout << "cant enqueue ";
    }
    else
    {
        q->arr[q->f] = val;
        q->f--;
    }
}
int fdequeue(struct node *q)
{
    int val;
    if (isempty(q))
    {
        // cout << "queue empty cant dequeue";
    }
    else
    {
        q->f++;
        val = q->arr[q->f];
    }
    return val;
}
int rdequeue(struct node *q)
{
    int x;
    if (isempty(q))
    {
        cout << "queue empty cant dequeue";
    }
    else
    {
       x = q->arr[q->r];
        q->r--;
    }
    return x;
}
int main()
{
struct node *q=(struct node *)malloc(sizeof(struct node ));
q->size=5;
q->r=q->f=-1;
q->arr=(int *)malloc(q->size*sizeof(int));
renqueue(q,5);
renqueue(q,6);
// fdequeue(q);
for(int i=q->f+1;i<=q->r;i++)
{
    traverse(q,i);
}
    return 0;
}