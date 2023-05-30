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
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
void insert(int *arr,int n,int index,int element)
{
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;

}
void deletion (int *arr,int n,int index)
{
    for(int i=index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    
}
void replace(int *arr,int index,int element)
{
    arr[index]=element;
}
int main()
{
    int arr[50];
    int n;
    cout<<"Enter array size ";
    cin>>n;
    input(arr,n);
    cout<<"\nDisplaying array "<<endl;
    display(arr,n);
    int index,element;
    // cout<<"Enter index at which do you want to insert an element ";
    // cin>>index;
    // cout<<"Insert element which you want to insert at index "<<index<<" in an array ";
    // cin>>element;
    // n=n+1;
    // insert(arr,n,index,element);
    // cout<<"Array after insertion of element is"<<endl;
    // display(arr,n);
    // cout<<"Enter index which you want to delete ";
    // cin>>index;
    // deletion(arr,n,index);
    // n=n-1;
    // cout<<"Array after deletion "<<endl;
    // display(arr,n);
    cout<<"Enter index to replace ";
    cin>>index;
    cout<<"Enter element you want to add at index "<<index<<": ";
    cin>>element;

    replace(arr,index,element);
    cout<<"Array after replacement ";
    display(arr,n);

    
    return 0;
}