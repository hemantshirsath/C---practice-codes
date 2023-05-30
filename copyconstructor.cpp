#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int num)
    {
        a=num;
    }
    // number(number &num)
    // {
    //     cout<<"Copy constructor called "<<endl;
    //     a=num.a;
    // }
    void display()
    {
        cout<<"The number is "<<a<<endl;
    }
};
int main()
{
    number n(2);
    n.display();
    number n2(n);
    n2.display();
    number n3;
    n3=n2;
    return 0;
}