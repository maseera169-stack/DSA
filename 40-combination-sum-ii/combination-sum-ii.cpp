class Solution {
public:
void solve(vector<vector<int>> &ans,vector<int> &nums,int target,int sum ,vector<int> &arr,int start){

    if(target-sum==0){
        ans.push_back(nums);
        return;
    }
    for(int i=start;i<arr.size();i++){
if(i>start && arr[i]== arr[i-1])
continue;



     if(i>arr.size()-1 || target-sum<0){
        break ;
     }

    
    sum+=arr[i];
    nums.push_back(arr[i]);
    solve(ans,nums,target,sum,arr,i+1);
    sum-=arr[i];
    nums.pop_back();

    }

}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> nums;
        vector<int> res;
        int start=0;
        sort(candidates.begin(),candidates.end());
        solve(nums,res,target,0,candidates,start);
        return nums;
    }
};