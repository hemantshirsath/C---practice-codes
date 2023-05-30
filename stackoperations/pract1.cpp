#include<iostream>
using namespace std;
int main()
{
    string input;
    string stuff;
    string unstuff;
    cout<<"Enter input string (0 and 1's Only): ";
    cin>>input;
    int i=0;
    int j=0;
    string p=stuff;
    string q=unstuff;
    int count=0;
    while(p[i]!='\0'){
        if(p[i]=='0'){
            q[j++]=p[i++];
        }
        else if(p[i]=='1')
    }
    return 0;
}