#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string ,int> marksmap;
    marksmap["hemant"]=90;
    marksmap["mohanish"]=86;
    marksmap["vishal"]=83;
    marksmap.insert({"jayesh",88});
    map<string,int>::iterator iter;
    iter= marksmap.begin();
    // marksmap.clear();
    for(iter=marksmap.begin();iter!=marksmap.end();iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<"isempty indicator "<<marksmap.empty()<<endl;
    cout<<"size of map is "<<marksmap.size()<<endl;
    cout<<"maximum size of map is "<<marksmap.max_size();

    return 0;
}