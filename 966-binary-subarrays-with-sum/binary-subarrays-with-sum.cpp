class Solution { 
public:
int atmost(vector<int>nums,int goal){
    int l=0,r=0,cnt=0,sum=0;
    if (goal<0)
    return 0;
    for(r=0;r<nums.size();r++){
        sum+=nums[r];
        while(sum>goal){
            sum-=nums[l];
            l++;
        }
        cnt+=(r-l+1);
        
    }
    return cnt;
}
    int numSubarraysWithSum(vector<int>& nums,int goal){
      int ans=  atmost(nums,goal)-atmost(nums,goal-1);
    return ans;} 
};