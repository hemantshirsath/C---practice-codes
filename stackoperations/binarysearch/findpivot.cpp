#include<iostream>
using namespace std;
int findpivot(int *arr,int n)
{
    int s=0,e=n-1;
    int mid;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return e;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<findpivot(arr,n);
    return 0;
}