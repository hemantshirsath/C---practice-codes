#include<iostream>
using namespace std;
int binarysearch(int *arr,int n,int key)
{
    int s=0,e=n-1;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;        
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key which you want to search ";
    int key;
    cin>>key;
    cout<<"Element is present at index " <<binarysearch(arr,n,key);
    return 0;
}