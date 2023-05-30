#include<iostream>
using namespace std;
void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
}

void display(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void rotate(int *arr,int n,int k)
{
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
    cout<<"\nRotated array is "<<endl;
    rotate(arr,n,0);
    display(arr,n);
    return 0;
}