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
    cout<<"Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

void insertionsort(int *arr,int n)
{
    int key=0;
    int j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

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
    insertionsort(arr,n);
    display(arr,n);
    return 0;
}