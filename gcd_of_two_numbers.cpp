// To find gcd of two numbers
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    // gcd(a,b)=gcd(a-b,b)   .a>b
    // gcd(a,b)=gcd(b,a%b) 
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}