#include<iostream>
using namespace std;
class arith{
    public:
    float a,b,result;
    void setdata(int k,int l)
    {
        a=k;
        b=l;
    }
    void sum()
    {
        result=a+b;
        cout<<"Sum is "<<result;
    }
    void subs()
    {
        result=a-b;
        cout<<"Substraction is "<<result;
    }
    void multi()
    {
        result=a*b;
        cout<<"Multiplication is "<<result;
    }
    void div()
    {
        result=a/b;
        cout<<"Division is "<<result;
    }
};
int main()
{
    int n;
    float a,b;
    arith k;
    cout<<"Enter 1 for summation"<<endl;
    cout<<"Enter 2 for substraction "<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division "<<endl;
    cin>>n;
    switch(n)
    {
       case 1:
       cout<<"Enter two numbers to be add ";
       cin>>a>>b;
       k.setdata(a,b);
       k.sum();
       break;
       case 2:
       cout<<"Enter two numbers to be substract  ";
       cin>>a>>b;
       k.setdata(a,b);
       k.subs();
       break;
       case 3:
       cout<<"Enter two numbers to be multiply  ";
       cin>>a>>b;
       k.setdata(a,b);
       k.multi();
       break;
       case 4:
       cout<<"Enter two numbers to be divide ";
       cin>>a>>b;
       k.setdata(a,b);
       k.div();
       break;
       default:
       cout<<"invalid input";
       break;



    }
    return 0;
}