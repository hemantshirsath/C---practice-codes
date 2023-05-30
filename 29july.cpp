#include<iostream>
using namespace std;
int fact(long long n)
{
    if(n<=0){
        return 0;
    }
    long long f=1;
    while(n>=1){
        f=f*n;
        n--;
 }
    return f;
}
int zeroes(int n)
{
    if(n<0)
    {
        return 0;
    }
   long long k=fact(n);
    int ans=0;
    while(1)
    {
        if(k%10==0){
            ans++;
            k=k/10;
        }
        else{
            break;
        }

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"\nFactorial of a number is "<<fact(n)<<endl;
    cout<<"\nZeroes at the end of the factorial is "<<zeroes(n);
    return 0;
}