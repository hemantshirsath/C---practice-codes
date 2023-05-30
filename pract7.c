// AIM: IMPLEMENTATION OF HEAP SORT ALGORITHM 
// NAME: HEMANT PADMAKAR SHIRSATH
// ROLL NO: 51
// SECTION : B
// BATCH : B2
#include<stdio.h>
void swap(int *a,int *b) //function for swapping a elements
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int *arr,int n,int i) //function for converting a array into a heap tree format 
{
    
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n&&arr[left]>arr[largest]){
        swap(&arr[left],&arr[largest]);
        largest=left;
    }
    if(right<=n&&arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int *arr,int n) //function for heapsort 
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(arr,n,i);
    }
    int size=n;
    while(size>1)
    {
        swap(&arr[size],&arr[1]);
        size--;
        heapify(arr,size,1);
    }
    
}
int main()
{
   int arr[6]={-1,54,53,55,52,50};
  int n=5;
   
    heapsort(arr,n);
    printf("\nSorted array is\n ");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}