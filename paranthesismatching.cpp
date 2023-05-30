#include <iostream>
using namespace std;
struct node
{
    int size;
    int top;
    char *arr;
};
int isempty(struct node *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
int ismatch(char a,char b)
{
    if(a=='('&&b==')')
    {
        return 1;
    }
    if(a=='{'&&b=='}')
    {
        return 1;
    }
    if(a=='['&&b==']')
    {
        return 1;
    }
    return 0;
}
void push(struct node *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "stack full cant push";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct node *ptr)
{
    int x;
    if (isempty(ptr))
    {
        cout << "stack empty cant pop";
    }
    else
    {
        x = ptr->arr[ptr->top];
        ptr->top--;
    }
    return x;
}
int paranthesismatching(char *exp)
{
    struct node *s = (struct node *)malloc(sizeof(struct node));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '('||exp[i]=='{'||exp[i]=='[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')'||exp[i]=='}'||exp[i]==']')
        {
            if (isempty(s))
            {
                return 0;
            }
           char k= pop(s);
           if(!ismatch(k,exp[i]))
           {
               return 0;
           }
           
        }
    }
    if (isempty(s))
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
    cout<<"paranthesis matched";
}
else{
    cout<<"Paranthesis not matched";
}
    return 0;
}