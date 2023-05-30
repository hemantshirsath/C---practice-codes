#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    // char string[50];
    // ptr=fopen("hemant1.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of file are %s",string);

    // writing to a file
    ptr=fopen("hemant1.txt","r");
    char string[50]="This is by hemant yo";
    // fprintf(ptr,"%s",string);
    char ch;
    // do{
    //     ch=fgetc(ptr);
    //     printf("%c",ch);
    // }while(ch!=EOF);
    // printf("%s",string);

    FILE *ptr2=NULL;
    ptr2=fopen("hemant1copy.txt","w");
    do{
        ch=fgetc(ptr);
        printf("%c",ch);
        fprintf(ptr2,"%c",ch);
    }while(ch!=EOF);
    
    // rename("hemant1.txt","fileio1.txt");
    // rename("fileio1.txt","hemant1.txt");

    return 0;
}