class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {
      int leftsum=0,rightsum=0;
         int n=cardpoints.size();
      for(int i=0;i<k;i++){
     
      leftsum+=cardpoints[i];}
int maxval=leftsum;
      for(int i=0;i<k;i++){
leftsum-=cardpoints[k-i-1];
rightsum+=cardpoints[n-1-i];
 maxval=max(maxval,leftsum+rightsum);}
     return maxval;}
};