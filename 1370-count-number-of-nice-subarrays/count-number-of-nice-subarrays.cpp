class Solution {
public:
int almost(vector<int> nums,int k){
    int l=0,r=0,cntodd=0,count=0;
    for(r=0;r<nums.size();r++){
        if(nums[r]%2 !=0)
        cntodd++;
        while(cntodd>k){
            if(nums[l]%2!=0)
              cntodd--;
            l++;
        }
        count+=r-l+1;
    }
    return count;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return almost(nums,k)-almost(nums,k-1);
    }
};