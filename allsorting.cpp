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
void bubblesort(int *arr, int n)
{
    int issorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        issorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}
void insertionsort(int *arr, int n)
{
    int j, key;
    for (int i = 0; i < n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void selectionsort(int *arr, int n)
{
    int lowindex;
    for (int i = 0; i < n; i++)
    {
        lowindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[lowindex])
            {
                lowindex = j;
            }
            int temp = arr[i];
            arr[i] = arr[lowindex];
            arr[lowindex] = temp;
        }
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
            i--;
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
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}
void quicksort(int *arr, int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = partition(arr, low, high);
        quicksort(arr, low, partitionindex - 1);
        quicksort(arr, partitionindex + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter size of an array ";
    cin >> n;
    int arr[n];
    input(arr, n);
    display(arr, n);
    quicksort(arr, 0, n - 1);
    cout << "\nSorted array is " << endl;
    display(arr, n);
    return 0;
}