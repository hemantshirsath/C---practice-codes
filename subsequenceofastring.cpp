#include<iostream>
#include<vector>
using namespace std;
void solve(string str,string output,int index,vector<string> &ans){
    if(index>=str.length()){
        ans.push_back(output);
        return;
    }
    solve(str,output,index+1,ans);
    char ch=str[index];
    output.push_back(ch);
    solve(str,output,index+1,ans);
}
int main()
{
    string str;
    cin>>str; 
    string output="";
    vector<string> ans;
    solve(str,output,0,ans);
    cout<<"\nSubsequences are "<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<"";
        }
        cout<<endl;
    }

    return 0;
}