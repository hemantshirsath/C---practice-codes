#include <iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return n;    
        }
    return (n+sum(n-1));
    }
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout<<"sum from 1 to "<<n<<" is "<<sum(n);

    return 0;
}