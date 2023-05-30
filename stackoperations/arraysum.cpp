#include<iostream>
using namespace std;
const int n=20;
int sum[n]; 
int main()
{
    int num;
    cout<<"Enter size of an array ";
    cin>>num;
    int arr[num];
    for(int i=1;i<=num;i++)
    {
        cin>>arr[i];
        sum[i]=sum[i-1]+arr[i];
    }
    int t;
    cout<<"Enter number of testcases ";
    cin>>t;
    int pos;
    while(t--)
    {
        cout<<"\nEnter position to which do you want sum ";
        cin>>pos;
        cout<<"\nValue is "<<sum[pos];
    }
    return 0;
}