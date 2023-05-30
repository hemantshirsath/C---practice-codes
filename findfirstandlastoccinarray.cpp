#include<iostream>
using namespace std;
int firstocc(int *arr,int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int lastocc(int *arr,int n,int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
         s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter key "<<endl;
    cin>>key;
    int ans1=firstocc(arr,n,key);
    int ans2=lastocc(arr,n,key);
    cout<<"First and last occurences are "<<ans1<<" "<<ans2<<endl;
    return 0;
}