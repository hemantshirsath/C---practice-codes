#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,3,4,2,5};
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}