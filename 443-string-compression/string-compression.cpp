class Solution {
public:
    int compress(vector<char>& chars) {
//         int i=0,j=1;
//         int count=1;
//         string str;
//         while(j<chars.size()){
//             if(chars[i]!=chars[j]){
// str+=chars[i];
// str+=count;
// count=1;
//             }else{
//                 count++;
//             }
//             i++;j++;
//         }
//         for(int i=0;i<str.length();i++){
//             chars[i]=str[i];
//         }
//         int n=str.length();
//     return n;}
int j=0,i;
int count=1;
for(int i=1;i<chars.size();i++){
    if(chars[i]!=chars[i-1]){


        chars[j++]=chars[i-1]; 
        if(count>=2){
            string s=to_string(count);
            for(char c : s){
chars[j++]=c;
            }
        }
        count=1;
    }
    else{
        count++;
    }
}
 chars[j++]=chars[chars.size()-1]; 
        if(count>=2){
            string s=to_string(count);
            for(char c : s){
chars[j++]=c;}}
    return j;}
};