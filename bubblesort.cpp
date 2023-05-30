#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    cout<<"Enter "<<n<<" elements of an array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display(int *arr,int n)
{
    cout<<" Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void bubblesort(int *arr,int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter array size";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    bubblesort(arr,n);
    display(arr,n);
    

    return 0;
}