#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    int *ptr=arr;
    cout<<"Enter "<<n<<" elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"\nDisplaying array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";
    }

    return 0;
}