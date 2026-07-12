class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       
       long long product=1,cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
product*=nums[j];
if(product<k)
    cnt++;
    else
    break;


            }product=1;
        }
    return cnt;}
};