#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"\nEnter "<<n<<" elements of an array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display(int *arr,int n)
{
    cout<<"\nDisplaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insert(int *arr,int n,int element,int index ){
    n=n+1;
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    printf("\nElement inserted successfully ");
}
void remove(int *arr,int n,int index)
{
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"\nElement removed successfully ";
}
int binarysearch(int *arr,int n,int key)
{
    int s=0,e=n-1;
    int m;
    while(s<=e)
    {
        m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]>key)
        {
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    int key,index;
    cout<<"Enter index which you want to delete ";
    cin>>index;
    remove(arr,n,index);
    n=n-1;
    display(arr,n);

    return 0;
}