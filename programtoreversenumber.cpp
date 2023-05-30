#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    int rev = 0;
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    while (rev!= 0)
    {
        switch (rev % 10)
        {
             case 0:
          cout<<"Zero";
          break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eighth ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        rev=rev/10;
    }
    return 0;
}