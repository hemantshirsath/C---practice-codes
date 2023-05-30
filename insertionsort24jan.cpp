#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=1;
    while(i<n){
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        i++;
    }
    cout<<"\nSorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}