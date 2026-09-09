class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,int target){
sort(nums.begin(),nums.end());
vector<vector <int>>res;
int n=nums.size();
        for(int k=0;k<n-3;k++){
           
            
            if ( k>0 && nums[k]==nums[k-1])
                continue;

                  for(int l=k+1;l<n-2;l++){
                    if(l>k+1 && nums[l]==nums[l-1])
                           continue;


 int i=l+1,j=nums.size()-1;
            
            while(i<j){
                          long long sum= (long long) nums[k]+nums[l]+nums[i]+nums[j];  

                if(sum==target){
                    vector<int> temp={nums[k],nums[i],nums[j],nums[l]};
                    res.push_back(temp);

                    i++,j--;
                    while(nums[i]==nums[i-1] && i<j) i++;
                    while(nums[j]==nums[j+1] && i<j)j--;

                    }
                else if(sum<target)
                i++;
                else
                j--;
            }
                  }
        }
         return res;
    }
};