#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a binary number ";
    cin >> n;
    int rem,s=0,i=0;
    while (n != 0)
    {
        rem = n % 10;
        n/=10;
        s=s+rem*pow(2,i);
        i++;

    }
    cout<<"Equivalent decimal 
}