#include <iostream>
using namespace std;
void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
void mergearray(int *arr1,int  *arr2,int *arr3,int n1,int n2,int n3)
{
   int i;
   for(i=0;i<n1;i++)
   {
       arr3[i]=arr1[i];
   }
   for(int j=0;j<n2;j++)
   {
       arr3[i]=arr2[j];
       i++;
   }


}
void sort(int *arr,int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n1, n2, n3;
    cout << "Enter first array size ";
    cin >> n1;
    int arr1[n1];
    input(arr1, n1);
    display(arr1, n1);
    cout<<"\nsorted array is "<<endl;
    sort(arr1,n1);
    display(arr1,n1);
    cout << "\nEnter second array size ";
    cin >> n2;
    int arr2[n2];
    input(arr2, n2);
    display(arr2, n2);
    sort(arr2,n2);
    cout<<"\nsorted array is "<<endl;
    display(arr2,n2);
    n3 = n1 + n2;
    int arr3[n3];
    cout << "\nMerged array is" << endl;
    mergearray(arr1, arr2, arr3, n1, n2, n3);
    display(arr3,n3);
    
    cout<<"\nSorted array is "<<endl;
    sort(arr3,n3);
    display(arr3,n3);

        return 0;
}