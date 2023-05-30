#include <iostream>
#include <list>
using namespace std;
void traverse(list<int> &l1)
{
    list<int>::iterator iter;
    for (iter = l1.begin(); iter != l1.end(); iter++)
    {
        cout << *iter << " ";
    }
}
int main()
{
    list<int> list1;
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(10);
    list1.push_back(2);
    list1.push_front(6);
    // list1.pop_front();
    list1.sort();
    traverse(list1);

    return 0;
}