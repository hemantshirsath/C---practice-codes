#include <iostream>
using namespace std;
void input(int *arr, int n)
{
    cout << "Enter " << n << " elements in an array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j); 
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void quicksort(int *arr, int low, int high)
{
    int partitionindex;
    if (low < high)
    {
         partitionindex= partition(arr, low, high);
        quicksort(arr, low, partitionindex - 1);
        quicksort(arr, partitionindex + 1, high);
    }
}
int main()
{
    int n;
    cout<<"Enter array size ";
    cin>>n;
    int arr[n];
    input(arr,n);
    display(arr,n);
    quicksort(arr,0,n-1);
    cout<<"\nSorted array is "<<endl;
    display(arr,n);
    return 0;
}