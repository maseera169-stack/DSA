class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    
        double maxav=-1e18;
        double sum=accumulate(nums.begin(),nums.begin()+k,0.0);
        int n=nums.size();
        if(n==1)
         return maxav=nums[0];
        
 maxav=max(maxav,sum/k);
        for(int i=k;i<n;i++){
              sum-=nums[i-k];
            sum+=nums[i];
            
             maxav=max(maxav,sum/k);

        }
        return maxav;
    }
};