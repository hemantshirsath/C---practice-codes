#include<iostream>
#include<cstring>
using namespace std;
struct node {
    int size;
    int top;
    char *arr;
};
char stacktop(struct node *sp)
{
    char x=sp->arr[sp->top];
    return x;
}
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
void push(struct node *sp,int val)
{
    if(isfull(sp))
    {
        cout<<"Stack overflow cant push";
    }
    else
    {
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
char pop(struct node *ptr)
{
    int val;
    if(isempty(ptr))
    {
        cout<<"Stack empty cant pop ";
    }
    else
    {
        val=ptr->arr[ptr->top];
        ptr->top--;
    }
    return val;
}
int isoperator(char exp)
{
    if(exp=='+'||exp=='-'||exp=='*'||exp=='/')
    {
        return 1;
    }
    return 0;
}
int precedance(char exp)
{
    if(exp=='*'||exp=='/')
    {
        return 3;
    }
    else if(exp=='+'||exp=='-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
char* infixtopostfix(char *infix)
{
    struct node *sp=(struct node *)malloc(sizeof(struct node ));
    sp->size=50;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size*sizeof(char));
    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
   int i=0;
   int j=0;
   while(infix[i]!='\0')
   {
       if(!isoperator(infix[i]))
       {
           postfix[j]=infix[i];
           i++;
           j++;
       }
       else if(precedance(infix[i])>precedance(stacktop(sp)))
       {
           push(sp,infix[i]);
           i++;
       }
       else
       {
           postfix[j]=pop(sp);
           j++;
       }
   }
   while(!isempty(sp))
   {
       postfix[j]=pop(sp);
       j++;
   }
   postfix[j]='\0';
   return postfix;
}
int main()
{
    char c[50];
    cout<<"Enter expression ";
    cin>>c;
    cout<<"Infix to postfix is "<<infixtopostfix(c);

    
    return 0;
}