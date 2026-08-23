class Solution {
public:
    string reverseWords(string s) {
        // reverse(s.begin(),s.end());
        string ans="";
//         int j=s.length()-1;
//         for(int i=s.length()-1;i>=0;i--){
//         if(s[i]==' '){
// ans+=s.substr(i+1,j-i)+" ";
// j=i-1;
//         }
//         else if(i==0){
//            ans+=s.substr(i,j+1); 
//         }}

//     return ans;
    
    int i=s.size()-1;
    while(i>=0){
        while(i>=0 && s[i]==' '){
            i--;
        }
        if(i<0)break;
        int j=i;
        while(i>=0 && s[i]!=' '){
            i--;
    }
    ans+=s.substr(i+1,j-i);
    ans+=" ";

  }
  if(!ans.empty()){
    ans.pop_back();
  }
 return ans;}
};