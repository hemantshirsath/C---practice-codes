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
    {
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
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
void bubblesort2(int *arr,int n)
{

}
int main()
{
    int n;
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    cout<<"Sorted array is"<<endl;
    bubblesort(arr,n);
    display(arr,n);


    return 0;
}