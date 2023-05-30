#include<iostream>
#include<list>
using namespace std;
void display(list <int> &l)
{
    list<int>::iterator iter;
    iter=l.begin();
    for(iter=l.begin();iter!=l.end();iter++)
    {
        cout<<*iter<<endl;
    }
}
int main()
{
    list<int> l;
    list<int> m;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
     l.push_back(5);
    //  l.pop_back();
    // l.pop_front();
    l.remove(3);
     display(l);
     m.push_back(6);
     m.push_back(7);
     m.push_back(8);
     m.push_back(9);
     m.push_back(7);
     l.merge(m);
     l.remove(7);
     cout<<"\nAfter merging the list 1 with list 2 is "<<endl;
     display(l);


    return 0;
}