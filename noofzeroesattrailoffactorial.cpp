#include<iostream>
#include<math.h>
using namespace std;
int zeroes(int n)
{
    int count=0;
    for(int i=5;i<=5;i++)
    {
        count=count+n/i;
    }
    return count;
}
int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of a number is "<<fact(n)<<endl;
    cout<<"No of trail zeroes is "<<zeroes(n);
    return 0;
}