class Solution {
public:

void solve(vector<vector<int>> &ans,vector<int> &nums,int ind,int target,int sum ,vector<int>arr){

    if(target-sum==0){
        ans.push_back(nums);
        return;
    }
    else if(ind>arr.size()-1 || target-sum<0){
        return ;
    }
    sum+=arr[ind];
    nums.push_back(arr[ind]);
    solve(ans,nums,ind,target,sum,arr);
    sum-=arr[ind];
    nums.pop_back();
     solve(ans,nums,ind+1,target,sum,arr);



}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>> nums;
        vector<int> res;
        solve(nums,res,0,target,0,candidates);
        return nums;


    }
};