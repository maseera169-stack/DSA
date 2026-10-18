class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int j;
        int l;
        
        while(i>=0 && s[i]==' ')
        i--;
           if(s.length()==1)return 1;
        int count=0;

        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }



   return count; }
};