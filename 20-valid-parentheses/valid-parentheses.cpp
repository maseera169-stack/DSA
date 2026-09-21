class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        int i=0;
        while(i<s.length()){
           
            char ch=s[i];
            if(ch=='(' ||  ch=='[' || ch=='{'){
stck.push(ch);
            }
            else{
            if(stck.empty())return false;
                char chh=s[i];

                if((chh==']' && stck.top()!='[') || (ch==')' && stck.top()!='(')
                || (ch=='}' && stck.top()!='{' ))return false;

                stck.pop();
            }
            i++;
        }
   return stck.empty(); }
};