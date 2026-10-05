class StockSpanner {
public: 
 vector<int>nums;
    StockSpanner() {
        
    }
    
    int next(int price) {
      
       int count=0;
        nums.push_back(price);
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>price){
                break;
            }
            else
            count++;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */