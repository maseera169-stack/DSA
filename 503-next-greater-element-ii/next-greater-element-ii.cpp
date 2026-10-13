class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        stack<int> st;
        int num=INT_MAX;
        int n=nums.size();
        
        unordered_map<int,int>mp;
        st.push(nums[n-1]);

        for(int i=2*n-1;i>=0;i--){
            int j=i%n;
            while(!st.empty() && st.top()<=nums[j]){
st.pop();
            }
           if(i<n){
            if(st.empty())
            mp[j]=-1;
            else
            mp[j]=st.top();}

            st.push(nums[j]);
         

        }
         for(int i=0;i<n;i++){
    ans.push_back(mp[i]);
}
   
   return ans;

    }
};