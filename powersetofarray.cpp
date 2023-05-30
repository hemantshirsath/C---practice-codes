#include<iostream>
#include<vector>

using namespace std;
void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return;
    }
    solve(nums,output,index+1,ans);
    int element=nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int ch;
        cin>>ch;
        nums.push_back(ch);
    }
    vector<int> output;
    vector<vector<int>> ans;
    solve(nums,output,0,ans);
    cout<<"\nAnswer is "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
}