#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0,t2=1,nt;
    for(int i=0;i<n;i++)
    {
        nt=t1+t2;
        cout<<t1<<" ";
        t1=t2;
        t2=nt;
    }
}
int main()
{
    int n;
    cout<<"Enter number of terms you want in a fibonacci series ";
    cin>>n;
    fib(n);
    return 0;
}