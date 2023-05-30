// AIM: CREATE A HASH TABLE AND HANDLE THE COLLISSIONS USING LINEAR PROBING WITH OR WITHOUT REPLACEMENT
// NAME: HEMANT PADMAKAR SHIRSATH
// ROLL NO: 51
// SECTION : B
// BATCH : B2
#include<stdio.h>
#include<stdlib.h>
#define size 10
int count=0;
struct hashTable //defining structure data type 
{
    int data;
    int delstatus;
};
struct hashTable ht[size];  //initialising hashtable 
void initHT()
{
    int i;
    for(int i=0;i<size;i++)
    {
        ht[i].delstatus=1;
    }
}
int isfull() //condition for checking is hash full or not
{
    if(count==size)
    {
        return 1;
    }
    return 0;
}
int isempty()  //condition for checking hash is empty or not 
{
    if(count==0)
    {
        return 1;
    }
    return 0;
}
void adddata()  //function for adding data to the hashtable
{
    int data,key,i;
    if(!isfull()){
    printf("\nEnter data ");
    scanf("%d",&data);
    key=data%size;
    if(ht[key].delstatus==1){
        ht[key].data=data;
        ht[key].delstatus=0;
        printf("\nData added to the table ");
        count++;
    }
    else{
        for(int i=0;i<size;i++)
        {
            key=(key+1)%size;
            if(ht[key].delstatus=1){
                ht[key].data=data;
                ht[key].delstatus=0;
                printf("\nData added to the table \n");
                count++;
                break;
            }
        }
    }
    }
    else
    printf("\nHash table is full ");
}
void deldata() //function for deleting the data from hashtable 
{
    int data,key,i,flag=0;
    if(!isempty()){
        printf("\nEnter data to delete :");
        scanf("%d",&data);
        key=data%size;
        if(ht[key].delstatus==0&&ht[key].data==data){
            ht[key].delstatus=1;
            printf("\nData deleted from the table ");
            count--;
        }
        else{
            for(int i=0;i<size;i++)
            {
                key=(key+1)%size;
                if(ht[key].data==data)
                {
                    ht[key].delstatus=1;
                    printf("\nData deleted from table \n");
                    count--;
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                printf("\nData to be deleted not fount in the table\n");
            }
        }
    }
    else
    printf("\nHash table is empty");
}
void display()  //function to display elements of hashtable
{
    int i;
    for(i=0;i<size;i++)
    {
        if(ht[i].delstatus==0){
            printf("%d ",ht[i].data);
        }
        else{
            printf("|  |");
        }
    }
}
int main()
{
    int ch;
    initHT(); //creating hashtable 
    do{
        printf("\nEnter 1 for adding data ");
        printf("\nEnter 2 for delete data");
        printf("\nEnter 3 for display ");
        printf("\nEnter 4 for exit");
        printf("\nEnter your choice ");
        scanf("%d",&ch);  //taking user choice as input 
        switch(ch){
            case 1:
            adddata();
            break;
            case 2:
            deldata();
            break;
            case 3:
            display();
            break;
        }
    }while(ch!=4);
    
    return 0;
}