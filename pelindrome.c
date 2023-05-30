#include<stdio.h>
#include<string.h>
int main()
{
   char c[50],str[50];
    printf("Enter string ");
   gets(c);
    strcpy(str,c);
    strrev(str);
    int k=strcmp(str,c);
    if(k==0)
    {
        printf("String is pelindrome ");
    }
    else
    {
        printf("String is not palindrome");
    }
    return 0;
}