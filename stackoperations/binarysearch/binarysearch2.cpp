#include<iostream>
using namespace std;
int binarysearch(int *arr,int n,int key){
    int s=0,e=n-1;
    int mid=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            break;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return mid;
}
int main()
{
    int n;
    cout<<"Enter size of an array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of an array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key you want to search into an array "<<endl;
    cin>>key;
    cout<<"Element is present at index: "<<binarysearch(arr,n,key);
    
    return 0;
}