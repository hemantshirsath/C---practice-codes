#include<iostream>
#include<stack>
using namespace std;
int match(char a,char b)
{
    if(a=='('&&b==')')
    {
        return 1;
    }
    else if(a=='{'&&b=='}')
    {
        return 1;
    }
    else if(a=='['&&b==']')
    {
        return 1;
    }
    else{
        return 0;
    }

}
int reverseanum(int num)
{
    stack<long long int> s;
    while(num>0)
    {
        int rem=num%10;
        s.push(rem);
        num/=10;
    }
    long long int ans=0;
        int x=1;

    while(!s.empty())
    {
        int k=s.top();
        s.pop();
        ans=ans+k*x*1LL;
        x*=10;
    }
    return ans;
}
int validparanthesis(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        if(ch=='('||ch=='{'||ch=='[')
        {
            s.push(ch);
        }
        else{
            if(s.empty())
            {
                return 0;
            }
            else{
                char top=s.top();
                if(match(top,ch))
                {
                    s.pop();
                }
                else{
                    return 0;
                }
            }
        }
    }
    if(s.empty())
    {
        return 1;
    }
    return 0;
}
void addsort(stack<int> &s,int val)
{
    if(s.empty()||s.top()>val)
    {
        s.push(val);
        return ;
    }
    int k=s.top();
    s.pop();
    addsort(s,val);
    s.push(k);
}
void sort(stack<int> &s)
{
    if(s.empty())
    {
        return;

    }
    int k=s.top();
    s.pop();
    sort(s);
    addsort(s,k);
}
void del(stack<int> &s,int size,int count )
{
    if(count==size/2)
    {
        s.pop();
        return ;
    }
    int k=s.top();
    s.pop();
    del(s,size,count+1);
    s.push(k);


}
void deletemid(stack<int> &s)
{
    int count=0;
    int size=s.size();
    del(s,size,count);

}
void addlast(stack<int> &s,int val)
{
    if(s.empty())
    {
        s.push(val);
        return ;
    }
    int k=s.top();
    s.pop();
    addlast(s,val);
    s.push(k);
}
void reverse(stack<int> &s)
{
    if(s.empty())
    {
        return ;
    }
    int k=s.top();
    s.pop();
    reverse(s);
    addlast(s,k);
}
int main()
{
//     stack<int> s;
//     s.push(7);
//     s.push(2);
//     s.push(5);
//     s.push(4);
//     s.push(1);
//   sort(s);
//     while(!s.empty())
//     {
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// string str;
// cout<<"Enter equation ";
// cin>>str;
// if(validparanthesis(str))
// {
//     cout<<"Paranthesis are matched ";
// }
// else
// {
//     cout<<"Paranthesis are not matched ";
// }
int n;
cout<<"Enter number to be reversed ";
cin>>n;
int k=reverseanum(n);
cout<<"Reversed number is "<<k;
    return 0;
}