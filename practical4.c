#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 50
char stack[50];
int top=-1;
void push(char val)
{
    if(top==size-1)
    {
        printf("\nStack overflow ");
    }
    else{
        top++;
        stack[top]=val;
    }

}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
char pop()
{
    char ch;
    if(top==-1)
    {
        return -1;
    }
    else{
      ch=stack[top];
      top--;  
    }
}
char stacktop()
{
    if(top==-1)
    {
        return -1;
    }
    else{
        return stack[top];
    }
}
int prec(char a)
{
    if(a=='*'||a=='/'){
        return 2;
    }
    else if(a=='+'||a=='-'){
        return 1;
    }
    else if(a=='('){
        return -1;
    }
}
void infixtopostfix(char *exp)
{
    char *postfix=(char *)malloc((strlen(exp)+1)*sizeof(char));
    int j=0;
    for(int i=0;exp[i]!='\0';i++)
    {
        char ch=exp[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        {
            postfix[j]=exp[i];
            j++;
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while(stacktop()!='('){
                postfix[j]=pop();
                j++;
            }
            pop();

        }
        else{
            while(!isempty()&&(prec(exp[i])<=prec(stacktop()))){
                postfix[j]=pop();
                j++;
            }
            push(exp[i]);
        }
        
    }
    while(!isempty()){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    printf("Postfix string is %c ",postfix);
}
int main()
{
    char c[50];
    printf("\nEnter equation ");
    gets(c);
    infixtopostfix(c);
    return 0;
}