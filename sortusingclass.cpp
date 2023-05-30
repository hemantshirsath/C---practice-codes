#include<iostream>
using namespace std;
class sort{
    int n;
    
    public:
    sort(int num)
    {
        n=num;
 
    }
    
    void input(int *arr)
    {
        cout<<"Enter "<<n<<"element of an array ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void display(int *arr)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    void bubblesort(int *arr);
    void insertionsort(int *arr);
    void selectionsort(int *arr);
    void merge(int *arr,int low,int mid,int high);
    void mergesort(int *arr,int low,int high );
    int partition(int *arr,int low,int mid,int high );
    void quicksort(int *arr,int low,int high );
    
    
    
};
int partition(int *arr,int low,int mid,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    int k=low;
    do{
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            J--;
        }

    }while(i<j);
}
void quicksort(int *arr,int low,int high)
{
    int mid;
    if(low<high)
    {
     int partitionindex=partition(arr,low,mid,high);
     quicksort(arr,low,partitionindex-1);
     quicksort(arr,partitionindex+1,high);
     
    }
}
void sort :: merge(int *arr,int low,int mid,int high )
{
    int i=low;
    int j=mid+1;
    int brr[high+1];
    int k=low;
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
        i++;
        k++;
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
void sort::mergesort(int *arr,int low,int high)
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
void sort::bubblesort(int *arr)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sort::insertionsort(int *arr)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}
void sort::selectionsort(int *arr)
{
    int indexofmin;
    for(int i=0;i<n-1;i++)
    {
        indexofmin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[indexofmin])
            {
                indexofmin=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[indexofmin];
        arr[indexofmin]=temp;
    }
    
}
int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int *arr=new int[n];
    sort* s=new sort(n);
    s->input(arr);
    s->display(arr);
    cout<<"Sorted array is "<<endl;
    s->mergesort(arr,0,n-1);
    s->display(arr);
}