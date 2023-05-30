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
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int *arr,int n)
{
    int issorted=0;
    for(int i=0;i<n;i++)
    {
        cout<<"\nrunning pass no "<<i+1<<endl;
        int issorted=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issorted=1;
            }
        }
        if(issorted==0)
        {
            return ;
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
    bubblesort(arr,n);
    display(arr,n);

    return 0;
}