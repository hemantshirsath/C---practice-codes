#include<iostream>
#include<math.h>
using namespace std;
void binarytodecimal(int n)
{
    int sum=0,rem,i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<"Equivalent decimal number is "<<sum;
}
void dtob(int n)
{
    int arr[30],i;
    for( i=0;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        cout<<arr[i];
    }
}

 
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
   binarytodecimal(n);

  
    return 0;
}