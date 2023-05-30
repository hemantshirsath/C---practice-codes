// selectionsort using recursion 
#include<iostream>
using namespace std;
void selectionsort(int *arr,int i,int n)
{
    if(i==n-1)
    {
        return ;
    }
    int minindex=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
    }
    swap(arr[i],arr[minindex]);
    selectionsort(arr,i+1,n);
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nSorted array is "<<endl;
    selectionsort(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}