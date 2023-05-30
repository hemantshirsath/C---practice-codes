#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"Enter "<<n<<" Elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void  bubblesort(int *arr,int n)
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
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(sorted)
        {
            return;
        }
    }
}
void insertionsort(int *arr,int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void selectionsort(int *arr,int n)
{
    int lowerindex;
    for(int i=0;i<n-1;i++)
    {
        lowerindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[lowerindex])
            {
                lowerindex=j;
            }
        }
        int temp=arr[lowerindex];
        arr[lowerindex]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int *arr=new int[n];
    input(arr,n);
    display(arr,n);
    cout<<"\nSorted array is "<<endl;
    // bubblesort(arr,n);
    // insertionsort(arr,n);
    selectionsort(arr,n);
    display(arr,n);
    return 0;
}