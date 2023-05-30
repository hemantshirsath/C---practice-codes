#include<iostream>
using namespace std;
struct node{
int size;
int top;
int *arr;
};
int isempty(struct node *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
void push(struct node *ptr,int val)
{
    if(isfull(ptr))
    {
        cout<<"Stack full cant push";
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
int ismatch(char a,char b)
{
    if(a=='('&& b==')')
    {
        return 1;
    }
    else if(a=='{'&&b=='}')
    {
        return 1;
    }
    else if(a=='['&&b==']')
    {
        return 1;
    }
    return 0;

}
int pop(struct node *ptr)
{
    int n;
    if(isempty(ptr))
    {
        cout<<"Stack empty cant pop";
    }
    else{
        n=ptr->arr[ptr->top];
        ptr->top--;

    }
    return n;
}
int paranthesismatching(char *eqn)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node ));
    ptr->size=50;
    ptr->top=-1;
    ptr->arr=(int *)malloc(ptr->size*sizeof(int));
    for(int i=0;eqn[i]!='\0';i++)
    {
        if(eqn[i]=='('||eqn[i]=='{'||eqn[i]=='[')
        {
            push(ptr,eqn[i]);
        }
        else if(eqn[i]==')'||eqn[i]=='}'||eqn[i]==']')
        {
            if(isempty(ptr))
            {
                return 0;
            }
           int k= pop(ptr);
           if(!ismatch(k,eqn[i]))
           {
               return 0;
           }
        }
        
    }
    if(isempty(ptr))
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    char c[50];
    cout<<"Enter expression ";
    cin>>c;
    if(paranthesismatching(c))
    {
        cout<<"Paranthesis matched ";
    }
    else
    {
        cout<<"Paranthesis not matched";
    }

    return 0;
}