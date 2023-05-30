#include<iostream>
using namespace std;
int steps(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return steps(n-1)+steps(n-2);
}
int main()
{
    int n;
    cout<<"\nEnter at which step you want to go "<<endl;
    cin>>n;
    int ans=steps(n);
    cout<<"\nThere are "<<ans<<" ways to reach at the step no "<<n<<endl;
    return 0;
}