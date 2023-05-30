#include<iostream>
using namespace std;
int main()
{
    int n,num=0;
    cout<<"Enter number ";
    cin>>n;
    while(n!=0)
    {
        num=(num*10)+(n%10);
        n/=10;
    }
    while(num!=0)
    {
        switch(num%10)
        {
            case 0:
            cout<<"Zero ";
            break;
            case 1:
            cout<<"One ";
            break;
            case 2:
            cout<<"Two ";
            break;
            case 3:
            cout<<"Third ";
            break;
            case 4:
            cout<<"Fourth ";
            break;
            case 5:
            cout<<"Fifth ";
            break;
            case 6:
            cout<<"Sixth ";
            break;
            case 7:
            cout<<"Seventh ";
            break;
            case 8:
            cout<<"Eighth ";
            break;
            case 9:
            cout<<"Nine ";
            break;
        }
        num/=10;
    }
    return 0;
}