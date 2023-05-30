#include<iostream>
#include<vector>
using namespace std;
void solve(string nums,string output,int index,vector<string> &ans,string mapping[])
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    int number=nums[index]-'0';
    string value=mapping[index];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(nums,output,index+1,ans,mapping);
        output.pop_back();
    }
    

}
int main()
{
    string digit="23";
    string output;
    vector<string> ans;
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,0,ans,mapping);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}