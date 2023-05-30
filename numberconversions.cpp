#include<iostream>
#include<math.h>
using namespace std;
int binarytodecimal(int n)
{
    int rem=0;
    int ans=0;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        ans=(ans)+(rem*pow(2,i));
        i++;
        n=n/10;
        }
        return ans;
}
int octaltodecimal(int n)
{
    int rem=0;
    int ans=0;
    int i=0;
    while(n>0)
    {
        rem=n%10;
        ans=ans+(rem*pow(8,i));
        i++;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Equivalent decimal is "<<ans;
    return 0;
}