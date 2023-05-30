#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int i = 1;
struct node *r = NULL;
struct node *f = NULL;
int isempty()
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}
void renqueue(int val)
{

    struct node *n = new struct node();
    n->data = val;
    if (n == NULL)
    {
        cout << "Queue full cant enqueue ";
    }
    else
    {

        if (f == NULL)
        {
            r = f = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
int fdequeue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        cout << "Queue empty cant dequeue ";
    }
    else
    {
        i = 1;
        val = ptr->data;
        f = f->next;
        free(ptr);
    }
    return val;
}
void fenqueue(int val)
{
    struct node *n = new struct node();
    n->data = val;
    if(f==NULL)
    {
        cout<<"Cant enqueue ";
    }
    if (n == NULL)
    {
        cout << "Queue full cant enqueue ";
    }
    else
    {
        n->next = f;
        f = n;
    }
}
int rdequeue()
{
    int val=-1;
    
    struct node *ptr=f;
    struct node *p=f->next;
    if(f==NULL)
    {
        cout<<"Queue empty cant dequeue ";
    }
    else{
        val=r->data;
    while(p->next!=NULL)
    {
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    }
    return val;
    
}
void traverse(struct node *ptr)
{

    while (ptr != NULL)
    {
        cout << "Element  " << i << " : " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
}
int main()
{
//     fenqueue(98);
    renqueue(1);
    renqueue(2);
    renqueue(3);
    fenqueue(4);
    rdequeue();
    traverse(f);
    return 0;
}