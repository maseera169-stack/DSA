class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0,j=0;
//         while(i<s.size() && s[i]=='#' || j<t.size() && t[j]=='#' ){
//             if(s[i]!='#'){
//                 i++;
//             }
//             if(j!='#'){
//                 j++;
//             }
//         }
//         while(i<s.size() && j<t.size()){
//             if(s[i+1]!=t[j+1]){
//                 return false;
//             }
//             i++,j++;
//         }
//    return true; }

vector<char> str1;
vector<char>str2;
for(int i=0;i<s.size();i++){
    if(s[i]!='#'){
        str1.push_back(s[i]);
    }
    else{
        if(str1.size()!=0){
            str1.pop_back();
        }
    }
}
for(int i=0;i<t.size();i++){
    if(t[i]!='#'){
        str2.push_back(t[i]);
    }
    else{
        if(str2.size()!=0){
            str2.pop_back();
        }
    }
}
if(str1==str2) return true;
    return false;}
};