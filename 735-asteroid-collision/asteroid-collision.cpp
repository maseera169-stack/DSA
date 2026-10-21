class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>st;
       
      
     for(int i=0;i<nums.size();i++){
         int flag=1;
        while(!st.empty() && nums[i]<0  &&  st.top()>0){
            if(st.top()< -nums[i]){
            st.pop();
}
else if(st.top()== -nums[i]){
    st.pop();
    flag=0;
    break;
}
else{
flag=0;
break;
}
        
        }
        if(flag==1)
        st.push(nums[i]);
     }  
     
    //  while(!st.empty()){
    //     vec.push_back(st.top());
    //     st.pop();
        
    //  } 
    //  reverse(vec.begin(),vec.end());
    // return vec;}
  vector<int> vec(st.size());
  for(int i=st.size()-1;i>=0;i--){
    vec[i]=st.top();
    st.pop();
  }
return vec; 
}
};