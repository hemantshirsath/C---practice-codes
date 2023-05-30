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
void insertionsort(int *arr,int n)
{
    
   for(int i=1;i<n;i++)
   {
       int key=arr[i];
       int j=i-1;
       while(arr[j]>key&&j>=0)
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
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    cout<<"sorted array is "<<endl;
    insertionsort(arr,n);
    display(arr,n);
    
    return 0;
}