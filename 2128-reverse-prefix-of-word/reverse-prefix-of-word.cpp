class Solution {
public:
    string reversePrefix(string s, char ch) {
        int j=s.find(ch);
        int i=0;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
  return s;  }
};