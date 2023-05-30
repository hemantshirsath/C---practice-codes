#include<iostream>
#include<string>
using namespace std;
void maxlenword(char *arr,int n)
{
    int i=0;
    int current=0,max=0;
    int st=0,maxst=0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(current>max)
            {
                max=current;
                maxst=st;

            }
            else
            {
                current=0;
                st=i+1;
            }
        }
        else
        {
            current++;
            
        }
        if(arr[i]=='\0')
        {
            break;
        }
    }
}
int main()
{
    char arr[50];
    cout<<"Enter input ";
    cin.getline(arr,50);
    int i=0;
    int current=0,max=0;
    int st=0,maxst=0;
    while(1)
    {
        if(arr[i]==' '||arr[i]=='\0')
        {
            if(current>max)
            {
                max=current;
                maxst=st;
            }
            current=0;
            st=i+1;
        }
        else 
        {
            current++;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<"Maximum length of a word in sentence is "<<max;
  cout<<"( ";
    for(int i=0;i<max;i++)
    {
        cout<<arr[i+maxst];
    }
    cout<<" ) ";
    return 0;
}