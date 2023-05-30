#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    int i=0;
    cout<<"Result is : "<<" ";
    while(i<str.length()){
        int count=1;
        int j=i+1;
        while(str[i]==str[j]){
            count++;
            j++;
        }
        if(count==1){
            cout<<str[i];
            i++;
        }
        else{
            cout<<count<<str[i];
            i=i+count;
        }
       
    }
    
    return 0;
}