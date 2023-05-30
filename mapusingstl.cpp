#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> map1;
    map1["Hemant "]=90;
    map1["Gaurav "]=12;
    map<string,int>::iterator iter;
    for(iter=map1.begin();iter!=map1.end();iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    return 0;
}