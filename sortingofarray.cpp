#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"Enter "<<n<<"elements of an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
}
void display(int *arr,int n)
{
    cout<<"Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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
    cout<<"\nsorted array is "<<endl;
    sort(arr,n);
    display(arr,n);
    
}