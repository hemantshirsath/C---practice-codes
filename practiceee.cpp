// check weather array is rotated sort
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            count = count + 1;
        }
    }
    if (arr[0] > arr[n - 1])
    {
        count++;
    }
    if (count<=1)
    {
        cout << "Rotated and sorted ";
    }
    else
    {
        cout << "Not rotated and sorted ";
    }

    return 0;
}