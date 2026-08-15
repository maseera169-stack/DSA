class Solution {
public:
bool check(vector <int> nums,int mid,int k){
    int sum=0,parts=1;
    for(int i=0;i<nums.size();i++){
sum+=nums[i];
if(sum>mid){
    parts++;
    sum=nums[i];
}
    }
    if(parts<=k){
        return true;
    }
return false;}
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0.0);
int mid,ans=INT_MAX;
        while(low<=high){
             mid=low+(high-low)/2;
            bool val=check(nums,mid,k);

            if(val){
                high=mid-1;
                ans=min(ans,mid);
            }
            else{
                low=mid+1;
            }
        }



    return ans;}
};