#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int l,count,i=0,j;
    printf("Enter a string : ");
    scanf("%s",&str);
    l=strlen(str);
    printf("Encoded string is : ");
    while(i<l){
        j=i+1;
        count=1;
        while(str[i]==str[j]){
            count++;
            j++;
        }
        if(count==1){
            printf("%c",str[i]);
            i++;
        }
        else{
            printf("%d%c",count,str[i]);
            i=i+count;
        }
    }
    return 0;
}