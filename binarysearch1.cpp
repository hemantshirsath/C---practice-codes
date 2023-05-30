#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0,e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter element which you want to search ";
    cin>>key;
    int k=binarysearch(arr,n,key);
    if(k==-1)
    {
        cout<<"Element not found ";
    }
    else{
        cout<<" Element found at index "<<k;
    }
    return 0;
}