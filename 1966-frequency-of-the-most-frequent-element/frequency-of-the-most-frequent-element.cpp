class Solution {
public:
    int maxFrequency(vector<int>& nums, int k){
  
int l=0,maxlen=0;
long long value,windowsum=0;
sort(nums.begin(),nums.end());
for(int r=0;r<nums.size();r++){
windowsum+=nums[r];
    value= 1ll*nums[r]*(r-l+1)-windowsum;
    while(value>k){
       windowsum -=nums[l];
       l++;
       value=1ll*nums[r]*(r-l+1)-windowsum;
    }
    maxlen=max(maxlen,r-l+1);

}
    return maxlen;}
};