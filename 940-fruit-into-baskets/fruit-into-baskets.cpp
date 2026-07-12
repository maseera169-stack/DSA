class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int,int>map1;

      int l=0,maxlen=0, r=0;
      for(r=0;r<fruits.size();r++){
         map1[fruits[r]]++;
    //   if(map1.find(fruits[r]==map1.end()))  {
        while(map1.size()>2){
            
            map1[fruits[l]]--;
            
            if(map1[fruits[l]]==0){
            map1.erase(fruits[l]);
            }
            l++;

            }
maxlen=max(maxlen,r-l+1);
     

        
      
    } 
    return maxlen;}
};