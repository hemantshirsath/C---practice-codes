#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;
    // int element,size;
    // cout<<"Enter size of your vector ";
    // cin>>size;
    // vector<int>::iterator iter=vec1.begin();
    // for(int i=0;i<size;i++)
    // {
    //     cin>>element;
    //     vec1.push_back(element);
    // }
  
    display(vec1);
    vec1.insert(iter,566);
    display(vec1);
    return 0;
}