#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int n ;
    cout<<"enter array size ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    sort(arr,arr+n-1);
    cout<<"\nsorted array is "<<endl;
     cout<<"Displaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}