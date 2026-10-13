class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
//         for(int i=0;i<nums1.size();i++){
//             int n=-1;
//             for(int j=0;j<nums2.size();j++){
              
//         if(nums2[j]==nums1[i]){
//             n=j;
//              break;
//         }
//             }
//             bool found=false;
//             for(int k=n+1;k<nums2.size();k++){
//                 if(nums1[i]<nums2[k]){
//                 ans.push_back(nums2[k]);
//                 found=true;
// break;
//                 }
//             }
//                 if(!found){
//                    ans.push_back(-1); 
//                 }
//             }
           
        
    
//    return ans; }
unordered_map<int,int>mp;
stack<int>st;
for(int i=nums2.size()-1;i>=0;i--){
    while(!st.empty() && nums2[i]>st.top()){
        st.pop();
    }
    if(st.empty()){
       mp[nums2[i]] =-1;

    }else{
        mp[nums2[i]]=st.top();
    }
    st.push(nums2[i]);
}
for(int i=0;i<nums1.size();i++){
    ans.push_back(mp[nums1[i]]);
}
   
   return ans; }
};