class Solution {
public:
 bool isvowel(char ch){
    return  ch=='i'|| ch=='o' || ch=='u' || ch=='e' || ch=='a';

 }
    int maxVowels(string s, int k) {
int l=0,r=0,cnt=0,maxx=0;
for(r=0;r<s.size();r++){
    if(isvowel(s[r])){
        cnt++;
    }
    if(r-l+1==k){
maxx=max(maxx,cnt);
if(isvowel(s[l])){
        cnt--;
    }
l++;

    }
}
   
    return maxx;}
};