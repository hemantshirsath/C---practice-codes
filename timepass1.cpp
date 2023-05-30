#include<iostream>
using namespace std;
class queue{
    public:
    int size;
    int r,f;
    int *arr;
    queue(int size)
    {
        this->size=size;
        r=f=-1;
        arr=new int[size];
    }
    int isempty()
    {
        if(r==f)
        {
            return 1;
        }
        return 0;
    }
    int isfull()
    {
        if(r==size-1&&f==0)
        {
            return 1;
        }
        else if(f==r-1){
            return 1;
        }
        return 0;
    }
    void enqueue(int val)
    {
        if(isfull())
        {
            cout<<"Queue full cant enqueue ";
        }
        else{
            if(r=f=-1)
            {
                r=f=0;
            }
            else if(r==size-1)
            {
                if(!isfull())
                {
                    r=0;
                }
            }
            else{
                r=r+1;
            }
            arr[r]=val;
        }
    }
    int dequeue()
    {
        int val=-1;
        if(isempty())
        {
            cout<<"Queue empty cant dequeue ";
            return val;
        }
        else{
            if(f==size-1&&!isempty())
            {
                val=arr[f];
                f=0;
            }
            else {
                val=arr[f];
                f++;
            }
        }
       
    }
    
};
int main()
{
    queue *q =new queue(5);
    q->enqueue(2);
    q->enqueue(2);
    cout<<q->isempty();
    return 0;
}