class Solution {
public:
    int lengthOfLongestSubstring(string s) {
 unordered_map<char,int> ch;
 int maxlength=0;
 int max1=0;
 int i=0,j=0;
 int n=s.size();
 while(j<n){

while(ch.find(s[j])!= ch.end()){
ch.erase(s[i]);
i++;
    }
        ch[s[j]]=j;
maxlength=max(maxlength,j-i+1);
    j++;
 }

        
    return maxlength;}
};