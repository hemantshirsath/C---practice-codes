#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
        
    }
    set<int> :: iterator it;
    for(auto x:s)
    {
        cout<<x<<" ";
    }

    return 0;
}