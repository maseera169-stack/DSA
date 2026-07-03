class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int heightt=0,width=0,area=0;
        while(i<j){
            heightt=min(height[i],height[j]);
            width=j-i;
            area=max(area,heightt*width);
            if(height[i]<height[j]){
                i++;
            }
            else
            j--;
    
            
            


        }
        return area;
    }
};