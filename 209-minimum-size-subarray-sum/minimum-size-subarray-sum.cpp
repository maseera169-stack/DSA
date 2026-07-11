class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int sum=0,minf=INT_MAX,l=0,r=0;
    for(r=0;r<nums.size();r++){
        sum+=nums[r];
        while(sum>=target){
            minf=min(minf,r-l+1);
            sum-=nums[l];
            l++;
        }
    }
if(minf==INT_MAX)
    return 0;
    else
    return minf;
}
};