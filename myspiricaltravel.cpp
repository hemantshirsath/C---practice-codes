#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and colums ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

        
    }
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    cout<<endl;
    while(row_start<=column_end)
    {
        // for column start 
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
        for(int col=column_start;col<=column_end;col++)
        {
            cout<<arr[row_end][col]<<" ";
        }
       row_end--;
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;
        for(int col=column_end;col>=column_start;col--)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
    }
    return 0;
}