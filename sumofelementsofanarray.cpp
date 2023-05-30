#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,max=INT_MIN,min=INT_MAX;
    cout<<"Enter size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"sum of an elements of an array is "<<sum;
    cout<<endl<<"The maximum element in an array is "<<max<<endl;
    cout<<"The minimum element in an array is "<<min<<endl;
    return 0;
}