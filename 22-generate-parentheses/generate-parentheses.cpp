class Solution {
public:


void solve(vector<string> &ans,int close,int open,string s ,int n){
if(open+close==2*n){
ans.push_back(s);
    return ;
}
if(open<n){
s+='(';
    solve(ans,close,open+1,s,n);
    s.pop_back();
}
if(close<open){
s+=')';
    solve(ans,close+1,open,s,n);
      s.pop_back();
}


}




    vector<string> generateParenthesis(int n) {
        vector<string> str;
        string s="";
    solve(str,0,0,s,n);
    return str;
    }
};