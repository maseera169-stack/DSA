class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> map1;
        int minwin=INT_MAX;
        int start=0;
        int formed=0,l=0;


        for(int i=0;i<t.size();i++)
        need[t[i]]++;

       int required=need.size();
    
for(int r=0;r<s.size();r++){
map1[s[r]]++;
char ch=s[r];
if(need.count(ch)&& map1[ch]==need[ch])
formed++;

while(required==formed)
{

if(r-l+1<minwin){
    minwin=r-l+1;
    start=l;
}
char leftchr=s[l];
map1[leftchr]--;
if(need.count(leftchr)&& map1[leftchr]<need[leftchr])
formed--;

l++;
}


    } 
    if(minwin==INT_MAX)
    return "";

return s.substr(start,minwin);}
    
};