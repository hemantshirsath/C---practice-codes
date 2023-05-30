#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"Enter "<<n<<" elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    int low,high,mid,key;
    cout<<"Enter element you want to search ";
    cin>>key;
    low=0;
    high=n-1;
   
    while(low<=high)
    {
         mid=(low+high)/2;
        if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]==key)
        {
            cout<<"Element found at index "<<mid;
            break;
        }
        else{
            high=mid-1;
        }
    }
    return 0;
}