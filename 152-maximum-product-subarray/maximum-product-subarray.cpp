class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];

        int m=*max_element(nums.begin(),nums.end());
int ph=1;
int pl=1;
int h=1;
int l=1;
        for(int i=0;i<nums.size();i++){
            h=ph*nums[i];
            l=pl*nums[i];
            ph=max({h,l,nums[i]});
            pl=min({h,l,nums[i]});
            if(m<ph)
            m=ph;

          
        }
    return m;}
};