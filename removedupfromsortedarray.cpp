#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(vector<int> &nums){

    int i=0;
    vector<int> ans;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
        ans.push_back(nums[i]);
    
        }
        i++;
    }
    if(i==nums.size()-1)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> nums={1,1,1,2,2,3,3,3,3,4,5,5,5,6,6,7,7,7,8,8,8,9};
    vector<int> ans=solve(nums);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}