class StockSpanner {
public: 
stack<pair<int,int>>st;
    StockSpanner() {
        
    }

int next(int price) {
      int span=1;
      while(!st.empty() && st.top().first<=price){
        span=span+st.top().second;
        st.pop();
      }
      st.push({price,span});
    //    int count=0;
    //     nums.push_back(price);
    //     for(int i=nums.size()-1;i>=0;i--){
    //         if(nums[i]>price){
    //             break;
    //         }
    //         else
    //         count++;
    //     }
    //     return count;
    return span;}
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */