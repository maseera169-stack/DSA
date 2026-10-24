class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum=0;
       for(int i=0;i<mat.size();i++) {
        sum+=mat[i][i];
        sum+=mat[mat.size()-i-1][i];
       }
       if(mat.size()%2==0)
       return sum;
       else
       return sum-mat[mat.size()/2][mat.size()/2];
    }
};