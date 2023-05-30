#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int *arr,int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n&&arr[left]>arr[largest]){
        swap(&arr[largest],&arr[left]);
        largest=left;
    }
    if(right<=n&&arr[right]>arr[largest]){
        // swap(&arr[largest],&arr[right]);
        largest=right;
    }
    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int *arr,int n)
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
    int arr[]={-1,3,2,5,9,1};
    int n=5;
    heapsort(arr,n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}