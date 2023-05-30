#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string ";
    cin>>str;
    int n=str.length();
    for(int i=0;i<str.length()/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<"Reversed string is "<<str;
    return 0;
}