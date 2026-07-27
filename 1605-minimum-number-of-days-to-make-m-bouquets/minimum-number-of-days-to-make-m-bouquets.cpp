class Solution {
public:
bool check(vector<int> nums,int z,int k,int m){
int count=0,bout=0;
int n=nums.size();


    for(int j=0;j<n;j++){
        if(nums[j]<=z){
        count++;

        if(count==k){
        bout++; count=0;}
        if(bout==m)
        return true;

         }
         else{
            count=0;
         }
         }
       return false; }
        
 int minDays(vector<int>& nums, int m, int k) {
 long long minf= 1LL*m*k;
if(nums.size()<minf)
return -1;
int minv=INT_MAX;
int minD=*min_element(nums.begin(),nums.end());
int maxD=*max_element(nums.begin(),nums.end());
while(minD<=maxD){
    int mid=minD+(maxD-minD)/2;
bool val=check(nums,mid,k,m);
    if(val){
         minv=min(mid,minv);
maxD=mid-1;
    }
    else{
        minD=mid+1;
    }


}
return minv;}

};
