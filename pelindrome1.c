#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],s[50];
    puts("Enter string ");
    gets(str);
    strcpy(s,str);
    strrev(s);
    int k=strcmp(s,str);
    if(k==0)
    {
      printf("String is pelindrome ");
    }
    else
    {
        printf("String is not pelindrome");
    }
    return 0;
}