#include<iostream>
#include<vector>
using namespace std;
void solve(string nums,string output,int index,vector<string> &ans){
    if(index>=nums.length()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums,output,index+1,ans);
    // include
    char element=nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}
int main()
{
    string nums="ABC";
    vector<string> ans;
    string output="";
    solve(nums,output,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}