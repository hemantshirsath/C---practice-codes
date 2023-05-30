#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"Enter "<<n<<" elemment of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int *arr,int n)
{
    int minind;
    for(int i=1;i<n;i++)
    {
        minind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minind])
            {
                minind=j;
            }
        }
       swap(arr[i],arr[minind]);
    }
}
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    selectionsort(arr,n);
    cout<<"\nSorted array is "<<endl;
    display(arr,n);
    return 0;
}