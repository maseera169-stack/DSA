class Solution {
public:
bool check(vector<int>nums ,int mid,int days){
    int currentload=0,dayused=1;
    for(int i=0;i<nums.size();i++){
        currentload+=nums[i];
        if(currentload>mid){
            dayused++;
            currentload=nums[i];


        }
        if(dayused>days){
            return false;
        }
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
int minele=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool val=check(weights,mid,days);
            if(val){
                minele=min(minele,mid);
                high=mid-1;

            }
            else{
                low=mid+1;
            }

        }
    return minele;}
};