class Solution {
public:
    bool isAnagram(string s, string t) {
    
        vector<int> ans(26,0);
        vector<int> ans1(26,0);



        for(int i=0;i<s.length();i++){
    ans[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
    ans1[t[i]-'a']++;
        }
if(ans1==ans)
return true;

    return false;}
};