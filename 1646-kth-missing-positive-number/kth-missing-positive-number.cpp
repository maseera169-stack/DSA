class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count=0;
        for(int i=1; ;i++){
            int found=false;
            for(int j :arr){
                
                if(i==j){
                    found=true;
                    break;
                }}
                if(!found){
count++;

                }
                if(count==k){
                    return i;
                }
        }
    return 1;}
};