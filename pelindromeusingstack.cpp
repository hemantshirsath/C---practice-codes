#include <iostream>
#include <string>
#include <cstring>
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
void push(struct node *ptr, char val)
{
    if (isfull(ptr))
    {
        cout << "Stack full cant push ";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct node *ptr)
{
    char x;
    if (isempty(ptr))
    {
        cout << "Stack empty cant pop ";
    }
    else
    {
        x = ptr->arr[ptr->top];
        ptr->top--;
    }
    return x;
}
char *convert(char *rev)
{
 int i=0;
 for(int i=0;rev[i]!='\0';i++)
 {
     if(rev[i]>='A'&&rev[i]<='Z')
     {
         rev[i]=rev[i]+32;
     }
 }
 return rev;
}
char *reverse(char *str)
{
    // str = convert(str);
    struct node *sp = (struct node *)malloc(sizeof(struct node));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *rev = (char *)malloc((strlen(str) + 1) * sizeof(char));
    int i = 0;
    while (str[i] != '\0')
    {
        push(sp, str[i]);
        i++;
    }
    int j = 0;
    while (!isempty(sp))
    {
        rev[j] = pop(sp);
        j++;
    }
    rev[j] = '\0';
    return rev;
}
int ispelindrome(char *a, char *b)
{
    a=convert(a);
    b=convert(b);
    int k = strcmp(a, b);
    return k;
}
int pelindrome(char *a,char *b)
{
    a=convert(a);
    b=convert(b);
    int i=0,j=0;
    int flag=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[j])
        {
            flag=1;
            break;
        }
        j++;
    }
    if(flag==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct node *sp = (struct node *)malloc(sizeof(struct node));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(struct node));
    char s[50];
    cout << "Enter string ";
    cin.getline(s, 50);
    char *rev = reverse(s);
    cout << "\nreversed string is " << rev;
    // if (ispelindrome(s, rev) == 0)
    // {
    //     cout << "\nString entered by you is pelindrome ";
    // }
    // else
    // {
    //     cout << "\nString enterd by you is not pelindrome ";
    // }
    // int k=strcmp(rev,s);
    // cout<<k;
    if(pelindrome(s,rev))
    {
        cout<<"\nPelindrome ";
    }
    else
    {
        cout<<"\nNot pelindrome ";
    }
    return 0;
}