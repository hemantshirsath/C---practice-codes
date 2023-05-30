#include <iostream>
using namespace std;
void input(int *arr, int n)
{
    cout << "Enter " << n << " Elements of an array ";
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
void insertionsort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void bubblesort(int *arr, int n)
{
    int temp;
    int issorted = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nPass no "<<i+1<<endl;
        issorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                issorted = 0;
            }
        }
        if(issorted)
        {
            return;
        }
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
   bubblesort(arr, n);
    cout << "\nSorted array is" << endl;
    display(arr, n);
    return 0;
}