#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"Enter expression ";
    cin>>a>>op>>b;
    
    float r;
    switch(op)
    {
        case '+':
         r=a+b;
        cout<<"Sum is "<<r;
        break;
        case '-':
         r=a-b;
        cout<<"Substraction is "<<r;
        break;
        case '*':
        r= a*b;
        cout<<"Multiplication is "<<r;
        break;
         case '/':
        r= a/b;
        cout<<"Division is "<<r;
        break;
        default:
        cout<<"Invalid input";
        break;

     }
    
}