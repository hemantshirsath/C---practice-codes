#include<iostream>
using namespace std;
int linearsearch(int *arr,int size,int k)
{
    static int p=0;
    if(size==0)
    {
        return 0;
    }
    if(arr[0]==k)
    {
        return p;
    }
    else{
    p++;
        return linearsearch(arr+1,size-1,k);
    }
   
}
int binarysearch(int *arr,int s,int e,int k)
{
    if(s>e){
        return 0;
    }
    int mid=(s+e)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]>k)
    {
        return binarysearch(arr,s,mid-1,k);
    }
    else{
        return binarysearch(arr,mid+1,e,k);
    }
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
    if(issorted(arr,n)){
        cout<<"\nSorted"<<endl;
    }
    else{
        cout<<"\nNot sorted "<<endl;
    }
}