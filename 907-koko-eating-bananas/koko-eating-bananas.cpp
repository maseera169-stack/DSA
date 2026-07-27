class Solution {
public:
bool check(vector<int> nums,int h,int mid){
int val=0,hours=0;
for(int i=0;i<nums.size();i++){
val=nums[i]/mid;
hours+=val;
    if(nums[i]%mid!=0)
    hours++;
  if(hours>h)
  return false;  
}
return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int left=1,right=*max_element(piles.begin(),piles.end());
       int minv=INT_MAX;
       while(left<=right){
        int mid=left+(right-left)/2;
        bool val=check(piles,h,mid);
        if(val){
            minv=min(minv,mid);
            right=mid-1;
        }
        else{
            left=mid+1;
        }
       }

   return minv; }
};