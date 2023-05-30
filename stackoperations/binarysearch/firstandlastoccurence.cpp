#include<iostream>
using namespace std;
int firstoccurence(int *arr,int n,int key)
{
    int s=0,e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}
int lastoccurence(int *arr,int n,int key)
{
    int s=0,e=n-1;
    int mid;
    int ans=-1;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key which you want to find ";
    cin>>key;
    cout<<"First occurence is "<<firstoccurence(arr,n,key)<<endl;
    cout<<"last occurence is "<<lastoccurence(arr,n,key)<<endl;
   int  total=(lastoccurence(arr,n,key)-firstoccurence(arr,n,key))+1;
    cout<<"Total occurences of "<<key<<" is "<<total;
    return 0;
}