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
int maximum(int *arr,int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
void countsort(int *arr,int n)
{
    int max=maximum(arr,n);
    int count[max+1];
    for(int i=0;i<=max;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]=count[arr[i]]+1;
    }
    int i,j;
    while(i<=max)
    {
        if(count[i]>0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
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
    cout<<"\nSorted array is "<<endl;
    countsort(arr,n);
    display(arr,n);

    return 0;
}