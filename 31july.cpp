#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of rows and columns "<<endl;
    cin>>row>>col;
    int **arr=new int*[row];
    for(int i=0;i<col;i++)
    {
        arr[i]=new int [col];
    }
    cout<<"\nEnter elements of an array "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nDisplaying array "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}