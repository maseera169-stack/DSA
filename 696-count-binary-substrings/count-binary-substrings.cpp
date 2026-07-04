class Solution {
public:
    int countBinarySubstrings(string s) {
        int currentlen=1,previous=0,ans=0;
for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]){
        currentlen++;
       
}
    
    else{
        previous=currentlen;
        
        currentlen=1;
       
    }
       if(previous>= currentlen){
        ans++;
       }
}
   return ans; }
};