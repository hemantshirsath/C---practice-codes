/* 
NAME: HEMANT SHIRSATH 
DIVISION: B 
BATCH : B2
ROLL NO : 51 
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
char stack[max];
int top=-1;
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
void push(char val)
{
    if(top==max-1)
    {
        printf("Stack overflow ");
    }
    else{
        top++;
        stack[top]=val;
    }
}
char pop()
{
    char x;
    if(isempty()){
        return -1;
    }
    else{
        x=stack[top];
        top--;
    }
    return x;
}
char stacktop()
{
    char x;
    if(isempty())
    {
        return -1;
    }
    else{
        x=stack[top];

    }
    return x;
}
int prec(char a )
{
    if(a=='^'){
        return 3;
    }
    else if(a=='*'||a=='/'){
        return 2;
    }
    else if(a=='+'||a=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
char* infixtopostfix(char *exp)
{
    char *postfix=(char *)malloc(strlen(exp)*(sizeof(char )));
    int j=0;
    for(int i=0;exp[i]!='\0';i++)
    {
        char ch=exp[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            postfix[j]=ch;
            j++;
        }
        else if(ch=='('){
            push(ch);
        }
        else if(ch==')'){
            while(!isempty()&&stacktop()!='('){
                postfix[j]=pop();
                j++;
            }
            pop();
        }
        else{
            while(!isempty()&&prec(ch)<=prec(stacktop())){
                if(ch=='^'&&stacktop()=='^'){
                    break;
                }
                postfix[j++]=pop();
            }
            push(ch);
        }
    }
    while(!isempty()){
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char c[50];
    printf("Enter equation ");
    gets(c);
    // puts(c);
   char *ans= infixtopostfix(c);
   puts(ans);
    return 0;
}