#include<iostream>
using namespace std;
int squareroot(int n)
{
    int s=0,e=n;
    int mid=n/2;
    int ans=-1;
    while(s<=n)
    {
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid>n)
        {
            
            e=mid-1;
        }
        else{
            s=mid+1;
            ans=mid;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number whose square root do you want to find ";
    cin>>n;
    int ans=squareroot(n);

    cout<<"Answer is "<<ans;
    return 0;
}