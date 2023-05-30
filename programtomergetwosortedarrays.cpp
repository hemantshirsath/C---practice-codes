#include <iostream>
using namespace std;
void input(int *arr, int n)
{
    cout << "Enter " << n << " elements of an array ";
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
void merge(int *arr,int low,int high)
{
    int mid;
    mid = (low + high) / 2;
    int i, j, k;
    i = low;
    j = mid+1 ;
    k = low;
    int b[50];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <=mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}
int main()
{
    int n;
    cout << "Enter array size ";
    cin >> n;
    int arr[n];
    input(arr, n);
    display(arr, n);
    cout << "\nMerged array is " << endl;
    merge(arr,0,n-1);
    display(arr, n);
    return 0;
}