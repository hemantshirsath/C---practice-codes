#include<iostream>
using namespace std;
void input(int *arr,int n)   //taking inputs from user
{
    cout<<"Enter "<<n<< " elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display(int *arr,int n)   //displaying array 
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void swap(int *a,int *b)    //function for swapping 
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubblesort(int *arr,int n) //bubblesort largest element gets its proper position at the end of each pass 
{
    int sorted=0;
    for(int i=0;i<n-1;i++)
    {
        sorted=1;
    
        for(int j=0;j<n-i-1;j++)
        {
    
            if(arr[j]>arr[j+1])
            {
                sorted=0;
                swap(arr[j],arr[j+1]);
            }
        }
        if(sorted)
        {
            return ;
        }
    }
}
void insertionsort(int *arr,int n)//insertionsort inserting each element  at its proper position 
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(arr[j]>key&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
}
void selectionsort(int *arr,int n)  //selectionsort finding small element and taking it to start 
{
    int minindex;
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
            
        }
        swap(arr[minindex],arr[i]);
    }
}
void merge(int *arr,int low,int mid,int high ) //function for merging the all divided elements 
{
    int i=low;
    int j=mid+1;
    int k=low;
    int *brr=new int[high+1];
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        {
            brr[k]=arr[i];
            i++;
            k++;
        }
        else{
            brr[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        brr[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        brr[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=brr[i];
    }
}
void mergesort(int *arr,int low,int high )//divide and conquere array and then merge it
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int partition(int *arr,int low,int high)    //function for partition for quicksort taking element to its right position and returning its position and again running quicksort for remaining elements by partitioning it 
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }while(i<j);
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int *arr,int low,int high) //dividing array until it conqueres 
{
    int partitionindex;
    if(low<high)
    {
        partitionindex=partition(arr,low,high);
        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);

    }
}
int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int *arr=new int[n];
    input(arr,n);
    display(arr,n);
    cout<<"\nSorted array is "<<endl;
    // bubblesort(arr,n);
    // insertionsort(arr,n);
    // selectionsort(arr,n);
    // mergesort(arr,0,n-1);
    quicksort(arr,0,n-1);
    display(arr,n);
    return 0;
}