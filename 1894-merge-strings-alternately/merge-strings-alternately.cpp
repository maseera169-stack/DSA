class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int i=0,j=0;
       string str;
       str.reserve(word1.size()+word2.size());
       int n=word1.size(),m=word2.size();
       while(i<n && j<m){
str+=word1[i++];
str+=word2[j++];

       }
       while(j==m && i<n){
        str+=word1[i++];
        
    }
       while(i==n && j<m){
        str+=word2[j++];
        
    }
    
    return str;}
};