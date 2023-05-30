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
void bubblesort(int *arr, int n)
{
    int temp;
    int issorted = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            issorted = 1;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted = 0;
            }
            if (issorted)
            {
                return;
            }
        }
    }
}
void insertionsort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
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
    int lowerindex = 0;
    for (int i = 0; i < n; i++)
    {
        lowerindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[lowerindex])
            {
                lowerindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[lowerindex];
        arr[lowerindex] = temp;
    }
}
int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countsort(int *arr, int n)
{
    int i, j, max;
    max = maximum(arr, n);
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
    i = 0;
    j = 0;

    while (count[i] <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
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
    cout << "\nSorted array is " << endl;
    // bubblesort(arr, n);
    countsort(arr, n);
    display(arr, n);
    return 0;
}