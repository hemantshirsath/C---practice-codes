#include<iostream>
using namespace std;
findpeak(int *arr,int n)
{
    int s=0,e=n-1;
    int mid;
    while(s<e)
    {
        if(arr[mid]>arr[mid+1]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return s;
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
    cout<<findpeak(arr,n);
    return 0;
    return 0;
}