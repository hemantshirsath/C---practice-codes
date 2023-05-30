 #include<iostream>
 #include<vector>
 using namespace std;
 void solve(string nums,int index,vector<string> &ans)
 {
    if(index>nums.length()){
        ans.push_back(nums);
        return;
    }
    for(int j=index;j<nums.length();j++){
        swap(nums[index],nums[j]);
        solve(nums,index+1,ans);
        swap(nums[index],nums[j]);
    }
 }
 int main()
 {
    string nums="ABC";
    int index=0;
    vector<string> ans;
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<endl;
    }
    return 0;
 }