class Solution {
public:
    string reorganizeString(string s) {
        
unordered_map<char,int> map1;
char max_char;
int maxfreq=0;
int n=s.size();
string ans(n,' ');
        for(char i : s){
        map1[i]++;    }
        for(auto i : map1){
            if(i.second>maxfreq){
                maxfreq=i.second;
                max_char=i.first;

            }

        }
        if(maxfreq > (n+1)/2){
            return "";
        }
        int ind=0;
        while(map1[max_char]>0){
            ans[ind]=max_char;
            ind+=2;
            map1[max_char]--;

        }
        for(auto i:map1){
        char ch=i.first;
        while(map1[ch]>0)
        {
            if(ind>=n)
                ind=1;
            ans[ind]=ch;
            ind+=2;
            map1[ch]--;


        }}


     return ans;   }
    
};