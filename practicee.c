#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50
char stack[max];
int top = -1;
char stacktop()
{

    char x;
     if (top == -1)
    {
        return -1;
    }
    else
    {
        x = stack[top];
        return x;
    }
}
int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
int prec(int a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(char ch)
{
    if (top == max - 1)
    {
        printf("\nstack overflow ");
    }
    else
    {
        top = top + 1;
        stack[top] = ch;
    }
}
char pop()
{
    char ch;
    if (isempty())
    {
        printf("\nStack underflow ");
    }
    else
    {
        ch = stack[top];
        top--;
    }
    return ch;
}
char *infixtopostfix(char *str)
{
    char *postfix = (char *)malloc((strlen(str) + 1) * sizeof(char));
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' || ch <= '9'))
        {
            postfix[j] = ch;
            j++;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (!isempty() && stacktop() != '(')
            {
                postfix[j] = pop();
                j++;
            }
            pop();
        }
        else
        {
            while (!isempty() && (prec(ch)) <= (prec(stacktop())))
            {
                postfix[j] = pop();
                j++;
            }
            push(ch);
        }
    }
    while (!isempty())

    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char c[50];
    printf("\nEnter expression ");
    gets(c);
    char *ans = infixtopostfix(c);
    puts(ans);

    return 0;
}