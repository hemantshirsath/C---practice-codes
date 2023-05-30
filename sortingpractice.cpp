#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int minindex;
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
}
void bubblesort(int *arr,int n)
{
    int sorted=1;
    for(int i=0;i<n-1;i++)
    {
        sorted=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=0;
            }
            
        }
        if(sorted)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" elements of an array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"\nSorted array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}