#include<iostream>
#include<cstring>
using namespace std;
struct node{
    int size;
    int top;
    char *arr;
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
void push(struct node *ptr,char val)
{
    if(isfull(ptr))
    {
        cout<<"Stack overflow cant push ";
        exit(0);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;

    }
}
char pop(struct node *ptr)
{
    char c;
    if(isempty(ptr))
    {
        cout<<"Stack underflow cant enqueue ";
        exit(0);
    }
    else{
        c=ptr->arr[ptr->top];
        ptr->top--;
    }
    return c;
}
char* reverse(char *exp)
{
    char *rev=new char(strlen(exp)+1);
    struct node *sp=new struct node();
    sp->size=30;
    sp->top=-1;
    sp->arr=new char[sp->size*sizeof(char)];
    int i=0;
    while(exp[i]!='\0')
    {
        push(sp,exp[i]);
        i++;
    }
    int j=0;
    while(!isempty(sp))
    {
        rev[j]=pop(sp);
        j++;
    }
    rev[j]='\0';
    return rev;
}
int ispelindrome(char *a)
{
    char *b=reverse(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
            break;
        }
    }
    return 1;

}
int main()
{
    char *exp=new char[50];
    cout<<"Enter string to be reversed ";
    cin>>exp;
    char *c=reverse(exp);
    cout<<"Reversed string is "<<c<<endl;
    if(ispelindrome(exp))
    {
        cout<<"Pelindrome ";
    }
    else{
        cout<<"Not pelindrome ";
    }
    return 0;
}