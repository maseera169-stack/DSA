class Solution {
public:
    int jump(vector<int>& nums) {
        int j=0;
        int c=0;
        int s=0;
        for(int i =0;i<nums.size()-1;i++){
            s=max({s,i+nums[i]});
            if(i==c){
                j++;
                c=s;
                if(c==nums.size()-1){
                    return j;
                }
            }
        }
    return j;}
};