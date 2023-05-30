#include<iostream>
using namespace std;
pair<int,int> solve(int *arr,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
      ans=ans^arr[i];
    }
    int first[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1){
            first[j]=arr[i];
            j++;
        }
    }
    int temp=ans;
    for(int k=0;k<j;k++){
        temp=temp^first[k];
    }
    ans=ans^temp;
    pair<int,int> p(ans,temp);
    return p;

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
    pair<int,int>p=solve(arr,n);
    cout<<"Two distinct elements are "<<p.first<<" and "<<p.second;
    return 0;
    
}

