class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
            res[0]=mid;
            high=mid-1;
            }
            else if(nums[mid]>target)
            high=mid-1;
            else
            low=mid+1;

            
        }

        int lw=0,hgh=nums.size()-1;
        while(lw<=hgh)
        {
            int mid=lw+(hgh-lw)/2;
            if(nums[mid]==target){
            res[1]=mid;
            lw=mid+1;
            }
            else if(nums[mid]>target)
            hgh=mid-1;
            else
            lw=mid+1;

            
        }
    return res;}
};