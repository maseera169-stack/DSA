class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int low=0,high=nums.size() -1;
      while(low<=high){
        if(nums.size()==1) return nums[0];
       int mid=low+(high-low)/2;
       
        if( mid>0 && nums[mid]==nums[mid-1]) {
            if((mid-1)%2==0)
            low=mid+1;
            else
            high=mid-1;
        }
        else if(mid<high && nums[mid]==nums[mid+1]){
            if((mid)%2==0)
            low=mid+1;
            else
            high=mid-1;
        }
        else{
            return nums[mid];
        }

      } 
    return 1;}
};