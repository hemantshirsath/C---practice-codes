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
void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int brr[50];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = brr[i];
    }
}
void mergesort(int *arr, int low, int high)
{
    int mid;
   if(low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1 , high);
        merge(arr, low, mid, high);
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
    mergesort(arr, 0, n - 1);
    cout << "Sorted array is " << endl;
    display(arr, n);
    return 0;
}