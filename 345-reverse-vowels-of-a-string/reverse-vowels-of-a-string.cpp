class Solution {
public:
bool retur(char ch){
    string vowels="AEIOUaeiou";
    if(vowels.find(ch)!=string::npos)
        return true;
        else 
        return false;
    
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j && !retur(s[i]))
                i++;
            
            while(i<j && !retur(s[j]))
            j--;
if(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        }
    return s;}
};