#include<iostream>
using namespace std;
int isarmstrong(int n)
{
    int k=n;
    int rem,sum=0;
    while(k>0)
    {
        rem=k%10;
        sum=sum+(rem*rem*rem);
        k=k/10;
    }
    if(n==sum)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    if(isarmstrong(n))
    {
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
    return 0;
}