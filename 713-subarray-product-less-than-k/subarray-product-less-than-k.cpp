class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       
       long long product=1,cnt=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i;j<nums.size();j++){
// product*=nums[j];
// if(product<k)
//     cnt++;
//     else
//     break;


//             }product=1;
//         }
//     return cnt;}

int l=0,r=0;
for(r=0;r<nums.size();r++){
product*=nums[r];
while(product>=k){
product/=nums[l];
l++;
}
cnt+=r-l+1;
}
 return cnt;}
};