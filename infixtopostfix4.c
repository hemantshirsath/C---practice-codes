#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *next;
};
struct node *top=NULL;
struct node *createnode(char val)
{
    struct node *n=(struct node *)malloc(sizeof(struct node ));
    n->data=val;
    n->next=NULL;
    return n;
}
int isempty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}
void push(char val){
    struct node *n=createnode(val);
    if(n==NULL)
    {
        printf("\nstack overflow ");
    }
    else{
        n->next=top;
        top=n;
    }
}
char pop()
{
    char x;
    if(top==NULL)
    {
        return 0;
    }
    else{
        char x=top->data;
        struct node *tp=top;
        top=top->next;
        free(tp);
        return x;
    }
    
}
char stacktop()
{
    if(top==NULL)
    {
        return -1;
    }
    char x=top->data;
    return x;
}

int prec(char a)
{
    if(a=='^')
    {
        return 3;
    }
    else if(a=='*'||a=='/')
    {
        return 2;
    }
    else if(a=='+'||a=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
}
char *infixtopostfix(char *exp)
{
    char *postfix=(char *)malloc((strlen(exp)+1)*sizeof(char));
    int j=0;
    char ch;
    int i;
    for(i=0;exp[i]!='\0';i++){
        ch=exp[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            postfix[j++]=ch;
        }
        else if(ch=='(')
        {
            push(ch);
        }
        else if(ch==')'){
            while(!isempty()&&stacktop()!='('){
                postfix[j++]=pop();
            }
            pop();
        }
        else{
            while(!isempty()&&prec(stacktop())>=prec(ch)){
                postfix[j++]=pop();
            }
            push(ch);
        }
    }
    while(!isempty())
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char c[50];
    printf("\nEnter expression ");
    gets(c);
    char *ans=infixtopostfix(c);
    printf("\nPostfix expression is : ");
    puts(ans);
    return 0;
}