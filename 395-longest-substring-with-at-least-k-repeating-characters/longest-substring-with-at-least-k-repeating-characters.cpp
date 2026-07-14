class Solution {
public:
int solve(string s ,int l,int r,int k){
   unordered_map<char,int> map1;
   int leftans=0,rightans=0;
   if(r<l) return 0;
       for(int i=l;i<=r;i++){
        map1[s[i]]++;
       } 
       for(int i=l;i<=r;i++){
        if(map1[s[i]]<k){
        leftans=solve(s,l,i-1,k);
        rightans= solve(s,i+1,r,k);
return max(leftans,rightans);
        } 
        
       

}
return r-l+1;}

    int longestSubstring(string s, int k) {
      return solve(s,0,s.size()-1,k);
       
    }
};