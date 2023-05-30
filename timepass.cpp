#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    int num;
    cout<<"Enter number which you want to reverse ";
    cin>>num;
    while(num>0)
    {
        int rem=num%10;
        st.push(rem);
        num=num/10;
    }
    int ans=0;
    int x=1;
    while(!st.empty())
    {
        int k=st.top();
        ans=ans+k*x;
        x=x*10;
        st.pop();
        
    }
    cout<<"Reversed number is "<<ans;
    return 0;
}