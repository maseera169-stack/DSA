class Solution {
public:
    int beautySum(string s) {
        int maxx=INT_MIN;
        int minn=INT_MAX;
        int beauty=0;
        for(int i=0;i<s.size();i++){
            int freq[26]={0};
        
            for(int j=i;j<s.size();j++){

        int maxx=INT_MIN;
        int minn=INT_MAX;
                freq[s[j]-'a']++;

                for(int k=0;k<26;k++){
maxx=max(maxx,freq[k]);
if(freq[k]>0){
minn=min(minn,freq[k]);}

                }
beauty+=maxx-minn;
            }
         
        }
   return beauty; }
};