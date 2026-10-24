class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
vector<int>ans(nums.size());
int k=0,j=1;
for(int i=0;i<nums.size();i++){
    if(i<n){
    ans[k]=nums[i];
    k+=2;
    }
    else{
ans[j]=nums[i];
j+=2;
 }

}

    return ans;}
};