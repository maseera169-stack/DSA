class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;
        stack<char>st;
        vector<int> visit(26,0);
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        } 
        for(int i=0;i<s.length();i++){  
            mp[s[i]]--; 
            if(visit[s[i]-'a']!=0) continue;
            else{
        while(!st.empty()){
if(st.top()>s[i] && mp[st.top()]>0)
{ 
    visit[st.top()-'a']=0;
    st.pop();
  }
else{
    break;
} 
} 
          st.push(s[i]);   
        }
        visit[s[i]-'a']=1;

        }
        string str;
        while(!st.empty()){
str+=st.top();
st.pop();
        }
         reverse(str.begin(),str.end());
    return str;}
};