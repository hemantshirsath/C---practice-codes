#include<iostream>
using namespace std;
int sorted(int *arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    return sorted(arr+1,size-1);

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
    if(sorted)
    {
        cout<<"\nSorted"<<endl;
    }
    else{
        cout<<"\nNot sorted "<<endl;
    }
    return 0;
}