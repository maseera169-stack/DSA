class Solution {
public:
    bool rotateString(string s, string goal) {
       string concate=s+s;
       int k=goal.length();
       int i=0;
       if(s.size()!=goal.size()) return false;
       for(int i=0;i<concate.size()-k;i++){
        int j=i;
        while(j<k+i){
        
            if(concate[j]!=goal[j-i])
            break;

            j++;
}
        if(j-i==k)
            return true;
       
       }
      return false;}
};