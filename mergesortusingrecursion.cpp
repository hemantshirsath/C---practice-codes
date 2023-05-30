// Mergesort using recursion 
#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int *brr=new int[high+1];
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j]){
            brr[k++]=arr[i++];
        }
        else{
            brr[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        brr[k++]=arr[i++];
    }
     while(j<=high)
    {
        brr[k++]=arr[j++];
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=brr[i];
    }

}
void mergesort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
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
    cout<<"Sorted array is "<<endl;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}