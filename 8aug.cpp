#include<iostream>
using namespace std;
int secondmax(int *arr,int n)
{
    int firstmax=0;
    int max2=0;
    for(int i=0;i<n;i++)
    {
        if(firstmax<arr[i]){
            firstmax=arr[i];
        }
        if(arr[i]!=firstmax&&arr[i]>max2){
            max2=arr[i];
        }

    }
    return max2;
 
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
    cout<<"Second max element in the array is "<<secondmax(arr,n);
    return 0;
}