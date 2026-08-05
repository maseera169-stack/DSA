class Solution {
public:
bool check(vector<int> nums,int mid,int threshold){
    int sum=0;
for(int i=0;i<nums.size();i++){
    sum+=ceil((double)nums[i]/mid);
}
if(sum<=threshold){
    return true;
}
return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxele=*max_element(nums.begin(),nums.end());
       int low=1,high=maxele;
       int result=INT_MAX;
    while(low<=high){
     int mid=low+(high-low)/2;
     int val=check(nums,mid,threshold);
     if(val){
        high=mid-1;
        result=min(result,mid);

}
else{
    low=mid+1;
}
       } 
    return result;}
};