#include <iostream>
#include<cstring>
using namespace std;
void sieve(int n)
{
    int prime[n+1]={1};
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = 2 * i; j <= n; j = j + i)
            {
                prime[i] = 0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}