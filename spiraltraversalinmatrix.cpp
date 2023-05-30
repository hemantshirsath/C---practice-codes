#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter number of rows and columns of an array ";
    cin>>n>>m;
    int arr[n][m];

     cout<<"Enter "<<(n*m)<<" elements of an array ";
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
    }

    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=m-1;
    cout<<endl;
    // for row start 
    while(row_start<=row_end)
    {
    for(int col=column_start;col<=column_end;col++)
    {
        cout<<arr[row_start][col]<<" ";
    }
    row_start++;
    // for column end 
    for(int row=row_start;row<=row_end;row++)
    {
        cout<<arr[row][column_end]<<" ";
    }
    column_end--;
    // for row end 
    for(int col=column_end;col>=column_start;col--)
    {
        cout<<arr[row_end][col]<<" ";
    }
   row_end--;
    // for column start 
    for(int row=row_end;row>=row_start;row--)
    {
        cout<<arr[row][column_start]<<" ";
    }
    column_start++;
    }

  
    return 0;
}