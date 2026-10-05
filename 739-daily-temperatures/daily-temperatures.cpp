class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
       
        stack<int>st;
        int n=temperature.size();
         vector<int> ans(n,0);
        int result;

        for(int i=0;i<temperature.size();i++){
            while(!st.empty() && temperature[st.top()]<temperature[i]){
               result=st.top();
               st.pop();
               ans[result]=i-result;
               }
    //             
    
           st.push(i);
        }
    //     ans.push_back(0);
    // return ans;}
// int i;
//     for( i=0;i<n;i++){
// for(int j=i+1;j<n;j++){
//     if(temperature[i]<temperature[j]){
//         ans[i]=j-i;
//         break;
//     }
    
//     }
// }
// while(i<n){
// ans[i]=0;
// i++;}
    return ans;}
};