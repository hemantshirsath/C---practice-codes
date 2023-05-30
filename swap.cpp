#include<iostream>
using namespace std;
template<class T>
void swap(T *a,T *b)
{
    T temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    float a,b;
    cout<<"Enter two integers ";
    cin>>a>>b;
    swap<float>(&a,&b);
    cout<<"After swapping ";
    cout<<"A = "<<a<<endl<<"B = "<<b;
    return 0;
}