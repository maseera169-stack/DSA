class Solution {
public:
int start=0;
int maxlength=0;
void expand(string &s ,int l,int r){
while(l>=0 && r<s.size() && s[l]==s[r]){
l--;
r++;}
int length=r-l-1;
if(length>maxlength){
    maxlength=length;
    start=l+1;
}
           } 
        
    string longestPalindrome(string s) {
       if(s.length()<2) return s;
        for(int i=0;i<s.size();i++){
            expand(s,i,i);
            expand(s,i,i+1);
        }  
        return s.substr(start,maxlength);            
    }
};