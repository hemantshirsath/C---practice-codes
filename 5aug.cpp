#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int *brr=new int [high+1];
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j])
        {
        brr[k]=arr[i];
        i++;
        k++;
        }
        else{
            brr[k]=arr[j];
            j++;
            k++;
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
void mergesort(int *arr,int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"\nSorted array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}